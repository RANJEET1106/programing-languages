

import petStore// A class can implement multiple interfaces
// An interface has no constructor
// An interface ca implement methods but doesent need to
// An interface cannot initialize values but can update them
// An interface can inherit from another interface

interface Pet{
    var cuteness: Int
    fun statPlaying()
    fun feed()
}

class Puppy:Pet{

    override var cuteness: Int = 10

    override fun statPlaying() { 
        println("Running, Jumping and barking")
    }

    override fun feed() {
        println("Give doggy treats")
    }

}

class Child{
    var pet:Pet
    init{
        val petStore=petStore()
        pet=petStore.getPet()
    }

    fun raisePet(){
        for(i in 1..pet.cuteness){
            pet.statPlaying()
        }

        pet.feed()
    }
}

class petStore{
    fun getPet(): Pet{
        return Puppy()
    }
}

fun main(){
    val child=Child()
    child.raisePet()
}
