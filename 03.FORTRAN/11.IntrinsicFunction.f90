program functions
    implicit none
    integer,dimension(2,2) :: matA,matB,matC
    integer :: i,j
    integer :: a(5)

    data matA(1,:) /1,0/
    data matA(2,:) /0,1/

    matB=reshape((/2,4,2,1/),(/2,2/))
    matC=matmul(matA,matB) ! Multiplies the matrices

    do i=1,2
        print*,(matC(i,j),j=1,2)
    end do

    print *,""

    print *,"Size",size(a),size(matA) ! gives total number of element matrix can store
    print*,"Shape",shape(a),shape(matA)
    print*,"Rank",rank(a),rank(matA)

    print*,all(matB>2),any(matB>2)
    print*,"Count",count(matB>2)

    print*,"Sum",sum(matB),sum(matB,matB>1)
    print*,"Product",product(matB)

    print*,"Min,Max",maxval(matB),minval(matB),maxval(matB,matB<4)

    print*,"Lower,Upper Bond",lbound(a),ubound(a)
    print*,lbound(matB),ubound(matB),ubound(matB,dim=2)



end program functions