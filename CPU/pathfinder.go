package main
import(
	"log"
	"time"
	"fmt"
	"math"
	"math/rand"
	"github.com/Arafatk/glot"
	"./queue"
)

type Xspace struct {
	rows int
	cols int
	xStep int
	yStep int
	maxX int
	maxY int
	maxK int
	idToAssign int
	bins []bin
}

type bin struct {
	hasnode bool
	inside * adjlistnode
	end * adjlistnode
}

type tree struct{
	nodeConnections []int
	root * treenode
	closest * treenode
	totnodes int
	numnodes int
	pa path
}

type path struct {
	k int
	togoal bool
	goalcost float64
	steps [] * treenode
}

type circleObs struct{
	xpos int
	ypos int
	radi int
}


type adjlistnode struct{
	node * treenode
	next * adjlistnode
}

type treenode struct{
	nodeid int
	xpos int
	ypos int
}

func (n treenode) String() string {
	return fmt.Sprintf("\nX: %v Y: %v \n",n.xpos,n.ypos)
}

func Initnode(xpos int, ypos int, sp * Xspace)(treenode){
	var newnode treenode
	newnode.nodeid = sp.idToAssign
	sp.idToAssign += 1
	newnode.xpos = xpos
	newnode.ypos = ypos

	sp.add(&newnode)

	return newnode
}

func Inittree(nnodes int, rtnode * treenode,maxK int)(newtree tree){
	newtree.numnodes = nnodes
	newtree.nodeConnections = make([]int,nnodes*nnodes)
	newtree.totnodes = 1
	newtree.root = rtnode
	newtree.closest = rtnode
	newtree.pa = path{
		k: maxK	,
		togoal:false,
		steps:make([]*treenode,maxK),
		goalcost:0,
	}

	return
}

func Initspace(maxx int, maxy int, maxk int,rows int,cols int)(space Xspace){
	space.idToAssign = 0
	space.maxX = maxx
	space.maxY = maxy
	space.maxK = maxk
	space.rows = rows
	space.cols = cols
	space.bins = make([]bin,rows*cols)
	space.yStep = int(maxy/rows)
	space.xStep = int(maxx/cols)

	return
}

func nodedist(n1 treenode, n2 treenode)(dist float64){
	return math.Hypot(float64(n1.ypos-n2.ypos),float64(n1.xpos-n2.xpos))
}

func (t * tree )connect(n1 treenode, n2 treenode){
	dist := nodedist(n1,n2)
	t.nodeConnections[t.numnodes*n1.nodeid + n2.nodeid] = int(dist)
	t.nodeConnections[t.numnodes*n2.nodeid + n1.nodeid] = int(dist)// Poor memory usage, optimize later

	return
}

func (t * tree)add(n1 treenode, n2 treenode){

}

func (space Xspace) add(n1 * treenode){
	colin := n1.xpos/space.xStep
	rowin := n1.ypos/space.yStep
	bintoplace := &space.bins[int(space.cols)*int(rowin) + int(colin)]
	bintoplace.hasnode = true
	newnode := &adjlistnode{n1,nil}
	if bintoplace.end == nil {
		bintoplace.end = newnode
		bintoplace.inside = newnode
	} else {
		bintoplace.end.next = newnode
		bintoplace.end = newnode
	}

	return
}

func updateCObs(obs []circleObs) {
	return
}

func updateGoal() (n1 treenode){
	return
}

func updateAgent() (n1 treenode){
	return
}

func genRandNode(space * Xspace, ngoal * treenode, t * tree) ( node treenode){
	rn := rand.Float64()
	alpha := 0.1
	beta := 2.0
	if rn > (1-alpha){
		dx := float64(t.closest.xpos-ngoal.xpos)
		dy := float64(t.closest.ypos-ngoal.ypos)
		linern := rand.Float64()*math.Hypot(dx,dy)
		rho := math.Atan(dy/dx)
		x := linern*math.Cos(rho)
		y := linern*math.Sin(rho)
		node = Initnode(int(x),int(y),space)

	}else if rn <= (1-alpha)/beta || !t.pa.togoal {
		node = Initnode(rand.Intn(space.maxX),rand.Intn(space.maxY),space)
	}else{
		cmin := nodedist(*t.root,*ngoal)
		cbest := t.pa.goalcost
		semimajor := cbest/2
		semiminor := math.Sqrt(math.Pow(cbest,2)-math.Pow(cmin,2))/2
		rho := rand.Float64()*2*math.Pi
		r := rand.Float64()
		x := r*math.Cos(rho)
		y := r*math.Sin(rho)
		x = x*semiminor
		y = y*semimajor
		transangle := math.Atan(float64(t.root.ypos-ngoal.ypos)/float64(t.root.xpos-ngoal.xpos))
		x = x*math.Cos(transangle) - y*math.Sin(transangle)
		y = x*math.Sin(transangle) + y*math.Cos(transangle)
		x = x + float64(t.root.xpos + ngoal.xpos)/2
		y = y + float64(t.root.ypos + ngoal.ypos)/2
		node = Initnode(int(x),int(y),space)
	}

	return
}

func findnodesnear(n treenode, xs [] * bin, space * Xspace, t * tree,r int)([] * treenode){
	e := math.Sqrt(float64(space.maxX)*float64(space.maxY)*float64(space.maxK)/math.Pi/float64(t.totnodes))
	ret := make([] * treenode,space.maxK*2)
	nodecnt := 0
	if e < float64(r) {
		e = float64(r)
	}
	for _,bin := range xs{
		checknode := bin.inside
		for checknode != nil {
			if checknode.node.nodeid != n.nodeid {
				dist := nodedist(*(checknode.node), n)
				if dist < e{
					ret[nodecnt] = checknode.node
					nodecnt += 1
				}
			}
			checknode = checknode.next
		}
	}
	return ret[:nodecnt]

}
func expandAndRewrite(t * tree,obs []circleObs, qr * queue.Queue, qs * queue.Queue, rmax int, ngoal * treenode, space * Xspace, stop <-chan time.Time,plt * glot.Plot){
	i := 0
	for {
		select {
		case <-stop:
			return
		default:
			log.Println("XXXXXXXXXXXXXXXXXXXXXXXRunningXXXXXXXXXXXXXXXXXXXXXXX")

			xrand := genRandNode(space,ngoal,t)
			pltNode(plt,xrand,fmt.Sprintf("rand%v",i))
			i +=1
			xs := Xs(xrand,space)
			nclose := findclosest(xrand,xs)
			if lineisfree(xrand,*nclose,space,obs){
				pltEdge(plt,xrand,*nclose,fmt.Sprintf("line%v",i))
				near := findnodesnear(xrand,xs, space,t,rmax)
				log.Println(xrand)
				log.Println(near)
			}
			time.Sleep(time.Millisecond*20)
		}
	}
	return
}

func Xs(n treenode, space * Xspace)(bins [] * bin) {
	colin := n.xpos / space.xStep
	rowin := n.ypos / space.yStep

	scanq := queue.New()
	scanq.Add([]int{colin, rowin})
	allclear := true
	r := 1
	for allclear {
		for cx := colin - r; cx <= colin + r; cx ++ {
			if cx < 0{
				cx = 0
			}
			for cy := rowin - r; cy <= rowin + r; cy ++ {
				if cy < 0{
					cy = 0
				}
				if space.bins[cy*space.cols+cx].hasnode &&(colin != cx && rowin != cy) {
					r -= 1
					allclear = false
					break
				}
				if cy == space.rows-1{
					cy = rowin + r
				}

			}
			if cx == space.cols-1{
				cx = colin + r
			}
			if !allclear {
				break
			}
		}
		r += 1
	}
	bins = make([]*bin,(2*r+1)*4-4)

	bincnt := 0
	bins[bincnt] = &space.bins[int(space.cols)*int(rowin)+int(colin)]
	bincnt += 1

	for cy := rowin - r; cy < rowin + r; cy ++ {
		if cy < 0 {
			cy = 0
		}
		cx := colin - r
		if cx < 0 {
			cx = 0
		}
		if space.bins[cy*space.cols+cx].hasnode &&(colin != cx && rowin != cy) {
			bins[bincnt] = &space.bins[cy*space.cols+cx]
			bincnt += 1
		}

		cx = colin + r
		if cx >= space.cols {
			cx = space.cols - 1
		}
		if space.bins[cy*space.cols+cx].hasnode &&(colin != cx && rowin != cy) {
			bins[bincnt] = &space.bins[cy*space.cols+cx]
			bincnt += 1
		}
		if cy == space.rows-1{
			cy = rowin + r
		}
	}
	for cx := colin - r; cx < colin + r+1; cx ++ {
		if cx < 0 {
			cx = 0
		}
		cy := rowin - r
		if cy < 0 {
			cy = 0
		}
		if space.bins[cy*space.cols+cx].hasnode &&(colin != cx && rowin != cy) {
			bins[bincnt] = &space.bins[cy*space.cols+cx]
			bincnt += 1
		}

		cy = rowin + r
		if cy >=space.rows {
			cy = space.rows - 1
		}
		if space.bins[cy*space.cols+cx].hasnode &&(colin != cx && rowin != cy) {
			bins[bincnt] = &space.bins[cy*space.cols+cx]
			bincnt += 1
		}
		if cx == space.cols -1 {
			cx = colin + r+1
		}
	}
	return bins[:bincnt]
}

func findclosest(n treenode,xs  [] * bin)(closenode * treenode){
	cmin := math.MaxFloat64
	var dist float64
	var clos * treenode = nil
	for _,bin := range xs{
		checknode := bin.inside
		for checknode != nil {
			if checknode.node.nodeid != n.nodeid {
				dist = nodedist(*(checknode.node), n)
				if cmin > dist {
					cmin = dist
					clos = checknode.node
				}
			}
			checknode = checknode.next
		}
	}
	if cmin == math.MaxFloat64 {
		panic("COULD NOT FIND CLOSE")
	}
	return clos
}

func lineisfree (n1 treenode, n2 treenode,sp * Xspace, obs [] circleObs)(bool){
	xLine := float64(n2.xpos - n1.xpos)
	yLine := float64(n2.ypos - n1.ypos)
	for _, circ := range obs {
		if circ.radi == 0{
			break
		}
		xcLine := float64(circ.xpos - n1.xpos)
		ycLine := float64(circ.ypos - n1.ypos)
		rho := -math.Atan(yLine/xLine)
		yp := xcLine*math.Sin(rho) + ycLine*math.Cos(rho)
		if math.Abs(yp) < float64(circ.radi) {
			return false
		}

	}

	return true

}

func pltNode(plt * glot.Plot,n1 treenode,name string){
	points := [][]int{{n1.xpos}, {n1.ypos}}
	plt.AddPointGroup(name, "circle", points)
	return
}
func pltEdge(plt * glot.Plot,n1 treenode,n2 treenode,name string){
	points := [][]int{{n1.xpos,n2.xpos}, {n1.ypos,n2.ypos}}
	plt.AddPointGroup(name, "lines", points)
	return
}

func main() {
	//plotting
	plot, _ := glot.NewPlot(2,false,false)

	// Adding a point group

	var MAXX = 1000
	var MAXY = 1000
	var maxKpath = 100
	var kmax = 10
	obsCirc := make([]circleObs,10)
	obsCirc[0] = circleObs{radi:100,xpos:500,ypos:500}
	rand.Seed( time.Now().UnixNano())
	//T := 0

	space := Initspace(MAXX,MAXY,kmax,10,10)

	xgoal := Initnode(MAXX-1,MAXY-1,&space)
	xa := Initnode(0,0, &space)

	Tau := Inittree(2000,&xa,maxKpath)

	Qr := queue.New()
	Qs := queue.New()
	pltNode(plot,xa,"Start")
	pltNode(plot,xgoal,"Goal")
	//for {
		updateCObs(obsCirc)
		xa = updateGoal()
		//xgoal = updateAgent()
		wait := time.After(time.Second * 1000)
		expandAndRewrite(&Tau, obsCirc,Qr,Qs,10, &xgoal, &space, wait,plot)
		fmt.Println("Rewrote")
	//}
	plot.SetTitle("Example Plot")
	// Optional: Setting the title of the plot
	plot.SetXLabel("X-Axis")
	plot.SetYLabel("Y-Axis")
	// Optional: Setting label for X and Y axis
	plot.SetXrange(0, MAXX)
	plot.SetYrange(0, MAXY)
	wait = time.After(time.Second * 60)
	<-wait
}
