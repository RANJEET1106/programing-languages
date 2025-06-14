//  'is' - checks whether an object is of a certain type
// 'as' - trasgers to other type
// 'as?' - null safe

open class Car11{}
class BMW: Car11() {
    fun drive(){
        println("Driving my BMW")
    }
}
fun getCar():Car11= Car11()
// fun getCar():BMW= BMW()
fun main(){
    val value= "My name is RANJEET"
    if(value is String)
        println("This string has ${value.length} characters")

    val myCar: Car11= getCar()
    if(myCar !is BMW)
        println("This is not my favourait brand")

    if(myCar is BMW)
        (myCar as BMW).drive()

    val bmwCar=myCar as? BMW
    bmwCar?.drive() 


}