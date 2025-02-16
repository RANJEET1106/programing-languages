fun greeting(name:String):String{
    // val message:String="Hello "+name
    val message:String="Hello $name"
    return message
}

fun greeting2(name:String):String = ("Hello $name")

fun main(){
    var name:String="RANJEET"
    var msg:String=greeting(name)
    println(msg)
    msg=greeting2(name)
    println(msg)
}