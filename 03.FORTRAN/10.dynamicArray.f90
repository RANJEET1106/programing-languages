program dynamic
    implicit none
    integer ,dimension(:,:),allocatable::my_array 
    ! 2 D array
    ! allocatable is keyword for dynamic array

    integer :: rows,cols
    integer :: i,j

    print *,"Enter the Dimention of Array: "
    read *,rows,cols

    allocate(my_array(rows,cols))

    do i=1,rows
        do j=1,cols
            my_array(i,j)=i*j
        end do
    end do

    do i=1,rows
        print *,(my_array(i,j),j=1,cols)
    end do

    print*,"---------------------After Using Where Statement----------------"

    where(my_array<10) !check for element which is less than 10
        my_array=10 !if element is less than 10 make it 10
    elsewhere
        my_array=100 ! else if greater than or equal to 10 make it 100
    end where

    do i=1,rows
        print *,(my_array(i,j),j=1,cols)
    end do


    deallocate(my_array)! Deallocating is important



    
end program dynamic