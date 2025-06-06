// Define a restricted hierarchy
// Abstact by default so cannot be instantiated
// Useful in when expressions

abstract class Plant 

sealed class Fruit: Plant()

sealed class Vegetable: Plant()

class Apple:Fruit()

class Potato: Vegetable()

fun getPlant(): Plant=Apple()
fun main(){
    val somePlant =getPlant()

    when(somePlant){
        is Fruit -> println("Sweet fruit")
        is Vegetable -> println("Testy vegetable")
    }
}