program formatting
    implicit none
    real :: value=45.67934,b=34.545
    character (len=10) :: my_form='(f5.2)'
    integer :: count=56
    logical :: a= .true.

    103 format (f5.2) ! 103 is lable it can be anything 1,2,3,...101,....
    104 format (e9.3)
    105 format (es9.3)
    106 format (i5.3) ! 4=width 3=min number of digits
    107 format (l4) ! 4 number of spaces

    print '(f5.2)',value ! 5=total space , 2 is umbers after decimal point
    print 103,value
    write(*,103) value
    print my_form,value
    print 104,value
    print 105,value
    print 106,count
    print 107,a
    print '(i4,6x,f6.2)',count,value ! nx is used for 'n' spaces
    print '(i4,/,f6.2)',count,value ! / is used for newline
    print '(2f5.2)',value,b



    
end program formatting