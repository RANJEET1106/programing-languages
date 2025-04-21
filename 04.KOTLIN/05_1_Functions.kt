fun greeting(name:String="Default"):String{
    // val message:String="Hello "+name
    val message:String="Hello $name";
    return message;
}

fun greeting2(name:String):String = ("Hello $name");

fun printhello10(){
    for(i in 1..10){
        println("Hello World");
    }
}

fun sayHello(peoples:Collection<String>){
    for(people in peoples){
        println("Hello $people");
    }
}

fun main(){
    var name:String="RANJEET";
    var msg:String=greeting(name);
    println(msg);
    msg=greeting2(name);
    println(msg);

    msg=greeting();
    println(msg);

    printhello10();

    val people=listOf("RANJEET","Yash","Akalank");
    sayHello(people);

}