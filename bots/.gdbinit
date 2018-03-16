define target hookpost-remote
mon reset halt
end
thb app_main
x $a1=0
c
