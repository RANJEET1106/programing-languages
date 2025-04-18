import kotlin.random.Random

fun main(){
    println("Input Something");
    var something=readLine();
    println("Your input is : $something");

    // inputing a number
    // input is read as string
    // can be converted into inegers(numbers)
    // readline can return nothing
    // to prevent empty return we can use ?:""
     
    println("\n\nInput a number");
    something=readLine()?:"";
    println("Your input is ${something.toInt()}")

    // Generating random number
    println(Random.nextInt());
    println(Random.nextInt(32)); //generate randome value upto 32 excluding
    println(Random.nextInt(20,32)); // from 20 to 30 , 20 included and 30 excluded
    println(Random.nextDouble());

}