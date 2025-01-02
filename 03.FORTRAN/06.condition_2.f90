program condition
    implicit none

    integer ::x,y
    print *,"Enter the Number"
    read *,x
    y=mod(x,2)
    select case(y)
    case(0)
        print*,"Number is Even"
    case(1)
        print*,"Number is Odd"
    case default
        print*,"Number is unknown"
    end select

    ! In Switch case we can use multiple type
    ! matching with multiple cases case(1,4,7,9)
    ! matching with range of cases case(lower_limit:upper_limit)

    !we can also combine like

    ! case(0)
    !     statement1
    ! case(3,6,9)
    !     statement2
    ! case(10:)
    !     statement3


end program condition