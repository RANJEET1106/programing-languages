program array
    implicit none
    ! array indexing starts from 1 by default

    integer,dimension(6) :: a !size of array is 6
    ! another way of declaring array

    ! integer ::a(6)

    
    integer,dimension(3:8)::b !index will range from 3 to 8 
    !index 1 & 2 will not exist in the above case
    integer i

    a=(/10,6,4,4,4,100/)
    do i=1,6
        print*,a(i)
    end do

    print*,"After Updating the value"

    do i=1,6
        a(i)=i**2
    end do

    do i=1,6
        print*,a(i)
    end do

    b(3)=5
    b(4:8)=10
    do i=3,8
        print*,b(i)
    end do
    
end program array