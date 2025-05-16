// makes code available without need for an object

class Car4{
    companion object{
        fun provideDrivingInstruction():String{
            return "Drive Safe !"
        }
    }
}

fun main(){
    println(Car4.provideDrivingInstruction())
}