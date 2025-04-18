fun main(){
    var myString="this is me";
    var myString2="One more string";
    var myString3="   this have too many spaces     ";
    println("\n\nLength of string is "+myString.length);

    //below 2 are deprecated packages
    // println("Capitlization of string: "+myString.capitalize())
    // println("Decapitalization of string: "+myString2.decapitalize())

    println("Trimming the string:"+myString3.trim())
    println("Letter on index 2 of myString2 is: "+myString2.get(2));
    println("Letter on index 2 of myString2 is: "+myString2[2]);

    println("Substring of myString from 3rd index is: "+myString.substring(3));
    println("Substring of myString from 3rd to 5th index is: "+myString.substring(3,6));
    // lst index is not included in substring

    
}