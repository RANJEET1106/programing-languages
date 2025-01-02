program decesion
    implicit none
    integer ::age,marks


    print*,"Enter the Age"
    read *,age
    if(age>=18) then
        print *,"You Can Vote"
    else if(age>=15) then
        print *,"You Will Vote After Some Time"
    else 
        print *,"You Can't Vote"
    end if

    print *,"Enter the Marks"
    read *,marks
    if(marks>10) then
        if(marks>20) then
            print *,"Very Good"
        else 
            print *,"Good"
        end if
    else 
        print *,"Not Good"
    end if


    print *, 5==5 .and. 4<1
    print *, 5==5 .or. 10>2
    print *, .not.(5==5 .and. 4<1)

    
end program decesion