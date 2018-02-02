package main
import(
	"log"
	"time"
	"fmt"
	"math"
	"math/rand"
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
	binvol float64
	idToAssign int
	bins []bin
}

type agent struct {
	xpos float64
	ypos float64
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
	pathexists bool
	totnodes int
	numnodes int
	goalcost float64
}

type circleObs struct{
	xpos int
	ypos int
	radi int
}

type treenodeQ struct {
	q * queue.Queue
	beenPushed [] bool
}
type adjlistnode struct{
	node * treenode
	next * adjlistnode
}

type treenode struct{
	nodeid int
	xpos int
	ypos int
	prevToRoot * treenode
}

func (n treenode) String() string {
	return fmt.Sprintf("N%v(%v,%v)",n.nodeid,n.xpos,n.ypos)
}

func Initqueue(nnodes int)(* treenodeQ){
	newq := new(treenodeQ)
	newq.q = queue.New()
	newq.beenPushed = make([]bool,nnodes)
	return newq
}
func Initnode(xpos int, ypos int)(*treenode){
	newnode := new(treenode)
	newnode.prevToRoot = nil
	newnode.nodeid = 0
	newnode.xpos = xpos
	newnode.ypos = ypos


	return newnode
}

func Inittree(nnodes int, rtnode * treenode,maxK int)(newtree tree){
	newtree.numnodes = nnodes
	newtree.nodeConnections = make([]int,nnodes*nnodes)
	newtree.pathexists = false
	newtree.goalcost = math.MaxInt64
	for i := 0 ; i< nnodes*nnodes; i ++ {
		newtree.nodeConnections[i] = math.MaxInt64
	}
	newtree.totnodes = 1
	newtree.root = rtnode
	newtree.closest = rtnode

	return
}

func Initspace(maxx int, maxy int, maxk int,rows int,cols int)(space Xspace){
	space.idToAssign = 1
	space.maxX = maxx
	space.maxY = maxy
	space.maxK = maxk
	space.rows = rows
	space.cols = cols
	space.binvol = float64(maxx*maxy)/float64(rows*cols)
	space.bins = make([]bin,rows*cols)
	space.yStep = int(maxy/rows)
	space.xStep = int(maxx/cols)

	return
}

func nodedist(n1 * treenode, n2 * treenode)(dist float64){
	return math.Hypot(float64(n1.ypos-n2.ypos),float64(n1.xpos-n2.xpos))
}

func (t * tree )connect(n1 * treenode, n2 * treenode){
	dist := nodedist(n1,n2)
	t.nodeConnections[t.numnodes*n1.nodeid + n2.nodeid] = int(dist)
	t.nodeConnections[t.numnodes*n2.nodeid + n1.nodeid] = int(dist)// Poor memory usage, optimize later

	return
}

func (t * tree )disconnect(n1 * treenode, n2 * treenode){
	if t.nodeConnections[t.numnodes*n1.nodeid + n2.nodeid] == math.MaxInt64{
		panic("NODES WERE ALREADY DISCONNECTED")
	}
	t.nodeConnections[t.numnodes*n1.nodeid + n2.nodeid] = math.MaxInt64
	t.nodeConnections[t.numnodes*n2.nodeid + n1.nodeid] = math.MaxInt64// Poor memory usage, optimize later

	return
}

func ( n * treenode)cost(t * tree) (float64){
	if n.prevToRoot == nil{
		return math.MaxFloat64/2
	}
	if n.nodeid == t.root.nodeid {
		return 0
	}
	return n.prevToRoot.cost(t) + float64(t.nodeConnections[t.numnodes*n.nodeid + n.prevToRoot.nodeid])
}

func (t * tree)addgoal(xPos int,yPos int,sp *Xspace,obs [] circleObs)(* treenode){
	goalnode := Initnode(xPos, yPos)
	goalnode.prevToRoot = nil
	if lineisfree(t.root,goalnode,sp,obs){
		t.connect(goalnode, t.root)
		goalnode.prevToRoot = t.root
	}
	sp.add(goalnode)
	t.totnodes += 1
	return goalnode
}

func (t * tree)addnode(newN * treenode, existN * treenode, near [] * treenode, sp * Xspace, obs [] circleObs, ngoal * treenode){
	if t.totnodes >= t.numnodes || sp.idToAssign >= t.numnodes{
		panic("TOO MANY NODES")
	}
	xmin := existN
	cmin := existN.cost(t) + nodedist(newN, existN)
	var cnew float64
	for _,node := range near{
		cnew = node.cost(t) + nodedist(newN,node)
		if cnew < cmin && lineisfree(newN,node,sp,obs){
			cmin = cnew
			xmin = node
		}
	}
	sp.add(newN)
	newN.prevToRoot = xmin
	t.connect(xmin,newN)
	t.totnodes += 1
	if (newN.nodeid != ngoal.nodeid)&&(nodedist(newN,ngoal) < nodedist(t.closest,ngoal)){
		t.closest = newN
	}
}

func (space * Xspace) add(n1 * treenode){
	colin := n1.xpos/space.xStep
	rowin := n1.ypos/space.yStep
	if n1.nodeid == 0 {
		n1.nodeid = space.idToAssign
		space.idToAssign += 1
	}else{
		panic("ADDING NODE AGAIN")
	}
	bintoplace := &space.bins[int(space.cols)*int(rowin) + int(colin)]
	bintoplace.hasnode = true
	newnode := new(adjlistnode)
	if bintoplace.end == nil {
		bintoplace.end = newnode
		bintoplace.inside = newnode
	} else {
		bintoplace.end.next = newnode
		bintoplace.end = newnode
	}
	bintoplace.end.node = n1

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

func genRandNode(space * Xspace, ngoal * treenode, t * tree) ( node * treenode){
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
		node = Initnode(int(x),int(y))

	}else if rn <= (1-alpha)/beta || !t.pathexists {
		node = Initnode(rand.Intn(space.maxX),rand.Intn(space.maxY))
	}else{
		cmin := nodedist(t.root,ngoal)
		cbest := t.goalcost
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
		node = Initnode(int(x),int(y))
	}

	return
}

func findnodesnear(n * treenode, xs [] * bin, space * Xspace, t * tree,r float64)([] * treenode, int){
	//searchSpace := float64(len(xs))*space.binvol
	e := math.Sqrt(float64(space.maxX)*float64(space.maxY)*float64(space.maxK)/math.Pi/float64(t.totnodes))
	ret := make([] * treenode,space.maxK*10)
	nodecnt := 0
	if e < float64(r) {
		e = float64(r)
	}
	for _,bin := range xs{
		checknode := bin.inside
		for checknode != nil {
			if checknode.node.nodeid != n.nodeid {
				dist := nodedist(checknode.node, n)
				if dist < e{
					ret[nodecnt] = checknode.node
					nodecnt += 1
				}
			}
			checknode = checknode.next
		}
	}
	return ret[:nodecnt], nodecnt

}

func rewirerand(t * tree,q * treenodeQ, space * Xspace,stop <-chan time.Time,r float64, obs []circleObs){
	for {
		var val interface{}
		select{
		case <-stop:
			return
		default:
			if q.q.Length()  < 1 {
				return
			}
			val = q.q.Remove()
			switch xr := val.(type) {
			case * treenode:
				xs := Xs(xr,space)
				near, _ := findnodesnear(xr,xs,space,t,r)
				for _, node := range near{
					cold := node.cost(t)
					cnew := xr.cost(t) + nodedist(node,xr)
					if cnew < cold && lineisfree(xr,node,space,obs){
						t.disconnect(node,node.prevToRoot)
						t.connect(xr,node)
						node.prevToRoot = xr
					}

				}
			default:
				panic("QUEUE HAS NON TREENODE")
			}
		}
	}
}

func rewireroot(q * treenodeQ, t * tree, space * Xspace, stop <-chan time.Time, r float64, obs [] circleObs){
	if q.q.Length() == 0 {
		q.q.Add(t.root)
		q.beenPushed[t.root.nodeid] = true
	}
	for {
		var val interface{}
		select{
		case <-stop:
			return
		default:
			log.Println("HIT1_REWIREROOT")
			if q.q.Length()  < 1 {
				return
			}
			val = q.q.Remove()
			switch xr := val.(type) {
			case * treenode:
				log.Println("HIT2_REWIREROOT")
				xs := Xs(xr,space)
				log.Println("HIT2.5_REWIREROOT")
				near, _ := findnodesnear(xr,xs,space,t,r)
				log.Println("HIT3_REWIREROOT")
				for _, node := range near{
					cold := node.cost(t)
					cnew := xr.cost(t) + nodedist(node,xr)
					if cnew < cold && lineisfree(xr,node,space,obs){
						t.disconnect(node,node.prevToRoot)
						t.connect(xr,node)
						node.prevToRoot = xr
					}
					if !q.beenPushed[node.nodeid]{
						q.q.Add(node)
						q.beenPushed[node.nodeid] = true
					}

				}
			default:
				panic("QUEUE HAS NON TREENODE")
			}
		}
	}

}
type stack [] * treenode

func (s stack) Push(v * treenode) stack {
	return append(s, v)
}

func (s stack) Pop() (stack, * treenode) {
	// FIXME: What do we do if the stack is empty, though?

	l := len(s)
	if l == 0{
		return s, nil
	}
	return  s[:l-1], s[l-1]
}

func goalconnected(ngoal * treenode, t * tree)(stack){
	if ngoal.prevToRoot != nil {
		var cost float64 = float64(t.nodeConnections[t.numnodes*ngoal.nodeid+ngoal.prevToRoot.nodeid])
		path := make(stack, 0)
		path.Push(ngoal)
		for toroot := ngoal.prevToRoot; toroot != nil; toroot = toroot.prevToRoot {
			path.Push(toroot)
			if toroot == t.root {
				t.pathexists = true
				t.goalcost = cost
				return path
			}
			cost += float64(t.nodeConnections[t.numnodes*ngoal.nodeid+ngoal.prevToRoot.nodeid])
		}
	}
	t.pathexists = false
	t.goalcost = math.MaxInt64
	return nil
}
func plan(t * tree, ngoal * treenode) (steps int, route [] * treenode){
	path := goalconnected(ngoal,t)
	if t.pathexists{
		route := make([] * treenode,len(path))
		i := 0
		for _, E := path.Pop(); E != nil ; _, E = path.Pop(){
			route[i] = E
			i += 1
		}
		return i, route
	}else if t.closest == t.root {
		return 0, nil
	}else{
		path := make(stack,0)
		path = path.Push(t.closest)
		var toroot * treenode
		for toroot = t.closest.prevToRoot; toroot != nil; toroot = toroot.prevToRoot {
			path = path.Push(toroot)
		}
		route := make([] * treenode,len(path))
		i := 0
		for path, E := path.Pop(); E != nil; path, E = path.Pop(){
			route[i] = E
			i += 1
		}
		return i, route
	}
}
func moveagent(t * tree, ag * agent){
	dx := float64(t.root.xpos)-ag.xpos
	dy := float64(t.root.ypos)-ag.ypos
	linemove := 10.0
	rho := math.Atan(dy/dx)
	if dx < 0 && dy < 0 {
		rho  = rho + math.Pi
	}
	x := ag.xpos+linemove*math.Cos(rho)
	y := ag.xpos+linemove*math.Sin(rho)
	ag.xpos = x
	ag.ypos = y
}
func expandAndRewrite(t * tree,obs []circleObs, qr * treenodeQ, qs * treenodeQ, rmax float64, ngoal * treenode, space * Xspace, stop <-chan time.Time,ag * agent){
	i := 0

	log.Println("HIT1")
	xrand := genRandNode(space,ngoal,t)
	log.Println("HIT2")
	i +=1
	xs := Xs(xrand,space)
	log.Println("HIT3")
	nclose := findclosest(xrand,xs)
	log.Println("HIT4")
	if lineisfree(xrand,nclose,space,obs){
		log.Println("HIT5")
		near,cntnear := findnodesnear(xrand,xs, space,t,rmax)
		if cntnear < space.maxK || nodedist(nclose,xrand)> rmax{
			t.addnode(xrand,nclose,near,space,obs,ngoal)
			qr.q.Add(xrand)
		} else{
			qr.q.Add(nclose)
		}
		rewirerand(t,qr,space,stop,rmax,obs)
		log.Println("HIT6")
	}
	log.Println("HIT7")
	rewireroot(qs,t,space,stop,rmax,obs)
	log.Println("HIT8")
	numstep, path := plan(t, ngoal)
	if math.Hypot(ag.ypos-float64(t.root.ypos),ag.xpos-float64(t.root.xpos)) < 10 && numstep > 0 {
		t.root = path[1]
		for i := 0; i < t.numnodes; i ++ {
			qs.beenPushed[i]=false
		}
	}
	moveagent(t,ag)

	return
}

func Xs(n *treenode, space * Xspace)(bins [] * bin) {
	colin := n.xpos / space.xStep
	rowin := n.ypos / space.yStep

	allclear := true
	r := 1
	for allclear {
		if r > space.cols {
			panic("R GOING CRAXZY")
		}
		log.Println("HIT1_Xs")
		log.Println(n,colin,rowin,"R: ",r)
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

func findclosest(n * treenode,xs  [] * bin)(closenode * treenode){
	cmin := math.MaxFloat64
	var dist float64
	var clos * treenode = nil
	for _,bin := range xs{
		checknode := bin.inside
		for checknode != nil {
			if checknode.node.nodeid != n.nodeid {
				dist = nodedist(checknode.node, n)
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

func lineisfree (n1 *treenode, n2 * treenode,sp * Xspace, obs [] circleObs)(bool){
	xLine := float64(n2.xpos - n1.xpos)
	yLine := float64(n2.ypos - n1.ypos)
	for _, circ := range obs {
		log.Println("HIT1_LINEISFREE")
		if circ.radi == 0{
			break
		}
		xcLine := float64(circ.xpos - n1.xpos)
		ycLine := float64(circ.ypos - n1.ypos)
		rho := -math.Atan(yLine/xLine)
		yp := xcLine*math.Sin(rho) + ycLine*math.Cos(rho)
		if math.Abs(yp) < float64(circ.radi) {
			log.Println("HIT4_LINEISFREE")
			return false
		}

	}

	log.Println("HIT3_LINEISFREE")
	return true

}

func dump(t * tree, sp * Xspace,frn int, ag * agent){
	fmt.Printf("F%v\n",frn)
	fmt.Printf("A(%v,%v)\n",ag.xpos,ag.ypos)
	for _, bin := range sp.bins{
		checknode := bin.inside
		for checknode != nil {
			fmt.Printf("N%v(%v,%v)\n",checknode.node.nodeid,checknode.node.xpos,checknode.node.ypos)
			checknode = checknode.next
		}
	}
	for i, edge := range t.nodeConnections {
		if edge != math.MaxInt64{
			fmt.Printf("E(%v,%v)\n",i/t.numnodes,i%t.numnodes)
		}
	}
}
func main() {
	//plotting

	//Config Variables
	var MAXX = 1000
	var MAXY = 1000
	var maxKpath = 100
	var kmax = 2
	var nnodes = 7000

	//Initalizing obstacles
	obsCirc := make([]circleObs,10)
	obsCirc[0] = circleObs{radi:200,xpos:500,ypos:500}
	obsCirc[1] = circleObs{radi:100,xpos:700,ypos:700}
	rand.Seed( time.Now().UnixNano())

	//Initialize Space
	space := Initspace(MAXX,MAXY,kmax,25,25)

	//Initialize Starting Node
	xa := Initnode(0,0)
	ag := new(agent)
	ag.xpos = 1
	ag.ypos = 1
	space.add(xa)

	//Initialize Tree
	Tau := Inittree(nnodes,xa,maxKpath)

	//Initialize Goal
	xgoal := Initnode(MAXX-1, MAXY-1) //Tau.addgoal(MAXX-1,MAXY-1,&space,obsCirc)

	//Initialize Queues
	Qr := Initqueue(nnodes)
	Qs := Initqueue(nnodes)

	framenum := 0
	for {
		//updateCObs(obsCirc)
		//xa = updateGoal()
		//xgoal = updateAgent()
		log.Println("XXXXXXXXXXXXXXXXXXXXXXXRunningXXXXXXXXXXXXXXXXXXXXXXX")
		wait := time.After(time.Millisecond*30)
		expandAndRewrite(&Tau, obsCirc,Qr,Qs,250, xgoal, &space, wait,ag)
		dump(&Tau,&space,framenum,ag)
		framenum += 1
	}
}
