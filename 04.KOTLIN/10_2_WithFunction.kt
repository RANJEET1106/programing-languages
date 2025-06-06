//  Perform a block of code on an object
// the cntext is available as 'this' (the "this" keyword can be omitted)
// Can access object variables and methods
// Typical use case 
    // perform some initialization on an object
    // perform a sequence on actions on an object

class Car5{
    var speed=50
    fun drive(){
        println("Driving as $speed")
    }
}
fun main(){
    with(Car5()){
        speed=80
        drive()
        println("Car is Driving")

    }
}