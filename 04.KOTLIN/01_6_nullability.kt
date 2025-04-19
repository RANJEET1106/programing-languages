fun main(){
    // if we want the nullable variable

    var herName:String?="abc";
    println("\n\n$herName")
    //we can se null to the herName
    herName=null;
    println("$herName");
    println(herName?.length) //return length if string exist or return null

    // but we can't set null value to the normal variable 
    var hisname:String ="abc";
    // hisname=null;  //this will give the error
    println(hisname);

    //Arithmatic Operators
    // Addition ?.plus()
    // Substraction ?.minus()
    // Multiplication ?.times()
    // Division ?.div()
    // Remainder ?.rem()

    var a:Int?=null;
    print("Addition of A and 3 is ");
    println(a?.plus(3));


    //  `?:` guarrentees the result returned
    //  if result is not null the return result or just return the null
    herName=null;
    println(herName?:"She dont have any name");
    println(herName?:"Fluffy".length);


    // Not null asseration
    // "!!" developer guarreenteed that variable don't have any null value
    // an trigger program crash
    // try to avoid this

    // println(herName!!.length); // will give the error
    


}