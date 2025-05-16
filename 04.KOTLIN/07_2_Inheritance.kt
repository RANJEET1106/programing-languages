open class Dog{
    var size:Int=0;

    fun bark(){
        println("Bark")
    }

    fun play(){
        println("Play")
    }
}

class Corgi:Dog(){

}

fun main(){
    val myDoggy=Corgi()
    myDoggy.size=10;
    println(myDoggy.size)
    myDoggy.bark()
    myDoggy.play()
}