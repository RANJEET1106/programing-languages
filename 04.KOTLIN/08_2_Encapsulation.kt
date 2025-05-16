// Classes can change the  scope of their vaiables,functions 
// private- visible inside class only
// protected - visible inside class and inherting class
// internal - visible inside the package
// public - visible to anyone accessing the class

// default is public

open class Airplane{
    // replce the keywords with public,private,protected and internal
    public val type="Airbus"

    public fun fly(){
        println("fying")
    }
}

class MyAirplane:Airplane(){
    fun takeOff(){
        println(type)
        fly()
    }
}

class MyCar(){
    fun start(){
        val airplane=Airplane()
        println(airplane.type)
        airplane.fly()
    }
}

fun main(){

}