// Can be used to apply some functionality and return a result
// Returns the initial object
// Common use case is applying configuration to an object creation


class Car7{
	var speed =10
	var color="blue"
	fun startCar(){
		println("Startig the car , speed is $speed, colour is $color")
	}
}

fun main(){
	val myCar=Car7().apply { 
		speed=50
		color="red"
		startCar()
	 }
	
	 println(myCar)
}
