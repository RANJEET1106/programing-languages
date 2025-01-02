program  operator
    implicit none
    ! integer :: a,b
    real :: a,b  !wth real we get the actual floating point in division
    complex :: x,y
    logical :: e
    a=4
    b=3

    print *,"Math Operation"
    print *,a+b,a-b,a*b,a/b,a**b

    print *,"Relational Operator"
    print *, a==b,a>b,a<b,a>=b,a<=b,a/=b ! last one means not equal to
    print *,"Another Way"
    print *,a.eq.b ,a.gt.b ,a.lt.b ,a.ge.b ,a.le.b ,a.ne.b

    x=(3,4)
    y=(1,-2)
    print *,"Operations on Complex Datatypes"
    print *,x+y, x-y, x*y, x/y

    e= .true.
    print *,e
    
end program operator