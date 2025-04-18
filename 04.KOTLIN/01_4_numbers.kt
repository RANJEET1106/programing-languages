fun main(){
    //types of number
    // byte - 8 bits,short- 16 bits, int - 32 bits, long - 64 bits
    // float - 32 bits && 6-7 decimals
    // double - 64 bits && 15-16 decimals

    var num=5;
    println("\n\nThe type of num veriable is ${num::class.java}");
    // by default  type assignment is int,long and double based on the value
    // we can explicitely define the types 
    var num2:Long =5;
    println("The type of num2 veriable is ${num2::class.java}");

    // we can also use type conversions on existing variables
    var longnum=num.toLong();
    println("The type of longnum veriable is ${longnum::class.java}");

    // when typecasting higher variable into lower e.g. long to int loss of information may happen
    // type conversions are
    // toByte,toShort,toInt,toLong,toFloat,toDouble

    // any variable can be cnverrted into string
    var str=num.toString();
    println("type of str variable is ${str::class.java}");

}