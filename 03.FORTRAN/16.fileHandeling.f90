program FileHandeling
    implicit none
    integer :: i
    integer :: a(5),b(5)
    real :: x(100)

    open(unit=5,file="new.dat") ! unit should be unique for each file
    do i=1,20
        write(5,*) i,i*2,i**3
    end do
    close(5)

    open (unit=6,file="new.dat")
    do i=1,5
        read(6,*) a(i),b(i)
    end do
    close(6)

    open (unit=7,file="new1.dat")
    do i=1,5
        write(7,*) a(i)+b(i)
    end do
    close(7)

    open(unit=8,file="new2.dat")
    do i=1,100
        x(i)=i*0.1
        write(8,*) x(i),sin(x(i))
    end do
    close(8)

    
end program FileHandeling