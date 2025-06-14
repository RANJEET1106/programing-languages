class Box<T>{
    fun display(item: T){
        println(item)
    }
}

class NewBox<T,U>{
    fun display(item:T, item2:U){
        println(item)
        println(item2)
    }
}
class Car10{}

// Type Parameters - restricting type

abstract class Fruit1{
    abstract fun peel()
}

class Apple1: Fruit1(){
    override fun peel(){
        println("peeling the apple")
    }
}

class Banana1: Fruit1(){
    override fun peel() {
        println("peeling the banana")
    }
}

class Chef<T: Fruit1>{
    fun cook(item: T){
        item.peel()
    }
}

fun main(){
    val myBox= Box<String>()
    myBox.display("Contents")
    val carBox = Box<Car10>()
    carBox.display(Car10())

    val newBox=NewBox<Int, Float>()
    newBox.display(34, 57.5F)

    val chef1=Chef<Apple1>()
    chef1.cook(Apple1())
    val chef2= Chef<Banana1>()
    chef2.cook(Banana1())
}