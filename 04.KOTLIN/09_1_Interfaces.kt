// using interface we don't need to create object for individual class
// we can directly use the functionalities without actually knowing the class


interface Oven{
    val temperature:Int
    fun turnOn()
    fun turnOff()
    fun cook(temp:Int){
        println("Cooking at $temp degrees")
    }

}

class Bosch: Oven{
    override val temperature=180;
    override fun turnOn(){
        println("Turning on Bosh")
    }

    override fun turnOff() {
        println("Turning off Bosh")
     }
}

class Bajaj: Oven{

    override val temperature = 200

    override fun turnOn() { 
        println("Turning on Bajaj")
    }

    override fun turnOff() {
        println("Turning off Bajaj")
     }

}
fun getOven():Oven{
    val randomNumber= System.currentTimeMillis()
    if(randomNumber%2==0L) return Bosch()
    else return Bajaj()
}

fun main(){
    val myOven:Oven=getOven() // we don't need to know the which oven is used in this case it is bosch oven
    myOven.turnOn()
    myOven.cook(150)
    myOven.turnOff()
}
