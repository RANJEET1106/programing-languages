program loop
    implicit none
    integer :: i,j,k

    print *,"Do Loop"
    do i=1,10 !,[step] by default step is +1
        if(i==3) cycle
        print *,i,"Hello Everyone"
    end do

    do i=1,10,3
        print *,i,"Hello from step"
    end do

    print *,"Do While Loop"

    i=1
    do While(i<10)

        print*,i,"Welcome"
        i=i+1
        if(i==5) exit

    end do

    do i=1,3
        do j=1,3
            do k=1,3
                print*,i,j,k
            end do
        end do
    end do
    
end program loop