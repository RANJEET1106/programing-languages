// A nested class is created inside another class
//  The inner class can access variables and methods of the outerr class

class Car9{
    private val engine =Engine()
    var speed=100
    fun drive(){
        engine.run()
        println("Driving at the speed $speed")
    }

    inner class Engine{
        var rpm=1000
        fun run(){
            println("Engine is running at $rpm rpm")
            this@Car9.speed=50
            // this@Car9.drive()

        }
    }
}

fun main(){
    val myCar=Car9()
    myCar.Engine().run()
    myCar.drive()
}