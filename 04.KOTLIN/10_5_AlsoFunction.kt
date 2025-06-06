// Used for performing some additional actions on an object
// Common use case is adding some actions that don't affect the object 
    // such as logging or debigging information

// Removing an also block should not affect the execution of a program
class Car8{
	var speed =10
	var color="blue"
	fun startCar(){
		println("Startig the car , speed is $speed, colour is $color")
	}
}
fun main(){
    Car8().apply{
        speed=80
        startCar()
    }
    .also{ car->
        println("Car is Running")
        println("Car speed is ${car.speed}")
    }
}