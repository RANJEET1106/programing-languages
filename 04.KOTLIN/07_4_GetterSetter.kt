class WierdCar{
    var name=""
    var speed:Int
        get()=50
        set(value){
            name="High Speed Car $value"
        }
}

fun main(){
    val car=WierdCar()
    car.speed=100
    println("car.name ${car.name}")
    println("car.speed ${car.speed}")
}