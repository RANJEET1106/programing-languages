program input
    implicit none   
    character*20 :: fname!,lname
    character (len=20) :: lname !max length 20
    print *,"What's Your Name"
    read * ,fname,lname
    print *,"Hello ",trim(fname)," ",trim(lname) !input needs to be trimmed out
end program input   