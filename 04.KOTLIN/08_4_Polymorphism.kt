// Dynamic -> method overriding
// Static -> method overloading

open class myMom{
    open fun say(message:String){
        println("Mom says $message")
    }

    fun say(){
        println("mom says hii")
    }

    fun say(message:String,times:Int){
        for(i in 1..times){
            println("Mom says $message")
        }
    }
}

class MyDaughter:myMom(){
    override fun say(message:String){
        println("Daughter says $message")
    }
}

fun main(){
    val mom=myMom()
    val daughter=MyDaughter()

    mom.say("hii")
    daughter.say("hii")

    mom.say()
    mom.say("Loop",5)
}