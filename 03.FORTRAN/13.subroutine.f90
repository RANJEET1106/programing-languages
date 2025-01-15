
program change
    implicit none
    integer :: a,b
    a=5
    b=6
    call interchange(a,b)
    print*,a,b    
end program change

subroutine interchange(x,y)
    implicit none
    integer::x,y,temp
    temp=x
    x=y
    y=temp
end subroutine 