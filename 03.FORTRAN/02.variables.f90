program variables
    implicit none
    real,parameter:: PI=3.1415 !real = number , float,double
                                ! parameter =Constant
    real :: r_num1=0.0,r_num2=0.0 !real provides 6 digits of pricision

    double precision :: dbl_num=1.11d+0 ! Double provides 16 digit pricision  at the end d+0 is important
    integer :: i_num1=0,i_num2=0
    logical :: can_vote=.true.
    character (len=10) :: month="June"
    complex :: com_num=(2.0,4.0)
    print *,"Biggest Real",huge(r_num1)
    print *,"Biggest Int", huge(i_num1)
    print *,"Smallest Real",tiny(r_num1)
    ! print *,"Smallest Int",tiny(i_num1) Tiny don't Wrok on integer

    print *,"Bytes required to sore datatypes"
    
    print "(a10,i2)","Int",kind(i_num2)

    print "(a10,i2)","Real",kind(r_num2)

    print "(a10,i2)","Double",kind(dbl_num)
    
    print "(a10,i2)","Logical",kind(can_vote)
    
    print "(a10,i2)","Complex",kind(com_num)

    print "(a10,i2)","Character Array",kind(month) !IMP
    ! a10 gives 10 space to text
    ! i2 gves 2 space to integer
    ! space starts to fill up from back
    ! it is used for formatting output

end program variables