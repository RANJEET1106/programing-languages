program recurtion
    implicit none
    integer(kind=16) :: factorial,n
    n=20
    print*,factorial(n)
    
end program recurtion



recursive function factorial(n) result(fact) ! result stored in fact variable and it is returned automatically 
    implicit none
    integer(kind=16) :: n,fact
    if(n==0 .or. n==1) then
        fact=1
    else 
        fact=n*factorial(n-1)
    end if

    
end function factorial