// Same as with but invokes and extension function
// Useful when you need a lambda that returns a result
// Can be used to limit the scope of variables

class Car6{
    var speed=10
    fun drive(){
        println("Car is driving at $speed")
    }
}

fun main(){
    val newCar=Car6().run{
        speed=70
        drive()
        println("Car6 is driving")
        this 
    }
    println(newCar)

    run{
        val car2=Car6()
        car2.speed=50
        car2.drive()
    }
}