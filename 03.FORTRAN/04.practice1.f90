program midpoint
    implicit none
    real :: x1,y1,x2,y2,x,y

    print *,"Enter first point in form of (x,y)"
    read *,x1,y1
    print *,"Enter second point in form of (x,y)"
    read *,x2,y2

    x=(x1+x2)/2
    y=(y1+y2)/2
    print *,"MidPoint is",x,y

    
end program midpoint