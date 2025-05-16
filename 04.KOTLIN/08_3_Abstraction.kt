// If 2 classes share common features,create a super class that contains the common features and inherit from it
// Use interface
// the keyword abstract means class can't be instatiated
// only extended from

abstract class Container{
    fun pour(){
        println("Pouring liquid")
    }
    abstract fun breaks() // compulsory to implement in child classes
}

class Bottle:Container(){
    fun fill(){
        println("Filling bottle")
    }

    override fun breaks(){
        println("Break Bottle")
    }

}
class Jug:Container(){
    override fun breaks(){
        println("Break Jug")
    }
}

fun main(){
    val container=Bottle()
    container.pour()
    container.fill()

    val container2:Container=Bottle()
    container2.pour()
    // container2.fill() // can't access fill cause objec is type if Container

    container.breaks()
    val container3=Jug()
    container3.breaks()
}