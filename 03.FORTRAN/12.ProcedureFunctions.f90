program procedureFunctions
    implicit none
    integer(kind=16) :: total,ans,fact,n

    ans=total(5,3)
    print*,ans

    print*,"Enter the number you want to find factrial of"
    read*,n
    print*,fact(n)


    
end program procedureFunctions

integer(kind=16) function total(a,b) 
    implicit none
    integer :: a,b
    total=a+b
end function total

integer(kind=16) function fact(x)  !result is stored in variable fact 
    implicit none
    integer(kind=16) ::x,ans,i
    ans=1
    do i=1,x
        ans=ans*i
    end do
    fact=ans  ! function automatically returns the variable same as function name
end function fact