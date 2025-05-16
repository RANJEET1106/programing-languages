// if class has multiple constructor,at least one must be initialized

open class Mom(nativeToung:String){
    open val hairColor="brown"
    val eyeColor="blue"
    val nativeToung=nativeToung

    open fun say(message:String){
        println("Mom says $message")
    }
}

// Daughter classes can override methods in mother classes using override keyword
// if thet are marked as open

// Daughter class can access mother class methods and variables using super keyword

class Daughter(nativeToung:String):Mom(nativeToung){
    override val hairColor="black"
    override fun say(message:String){
        println("daughter says $message")
        super.say(message)
        println(super.hairColor)
    }
}

fun main(){
    val carol=Daughter("Marathi")
    println(carol.hairColor)
    println(carol.nativeToung)
    carol.say("Hi")
}