program array
    implicit none

    integer :: matA(2,3) ! 2 rows and 3 columns
    integer :: i,j
    print *,"-------------------Mat 1--------------------"
    matA=reshape((/10,11,12,13,14,15/),(/2,3/))
    do i=1,2
        print*,(matA(i,j),j=1,3)
    end do

    print *,"-------------------Mat 2--------------------"
    matA=transpose(reshape((/10,11,12,13,14,15/),(/3,2/)))
    do i=1,2
        print*,(matA(i,j),j=1,3)
    end do

    print *,"-------------------Mat 3--------------------"
    do i=1,2
        do j=1,3
            matA(i,j)=i*j
        end do
    end do

    do i=1,2
        print*,(matA(i,j),j=1,3)
    end do

    
    
end program array