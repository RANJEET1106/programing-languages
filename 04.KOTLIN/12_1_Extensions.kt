/*
Function Extension
Can add functions to classes that we don't own or cannot modify
Can access the object using the 'this' reference 
The original class is not modified
the new functions are not actually inserted in the class
rather it's a shortcut to make the functions available using usual
object.function notation
*/

fun String.slim() = this.substring(1,length-1)


/*
Property Extension
The property is not actually inserted into the class
the extension propeties are a shortcut for the .notation
therefore initializers are not allowed
*/


val String.betterLength: Int 
    get()=200

/*
Companion Object Extensions
If a class has a companion object defined, we can extend it with 
function and properties
If not, we cannnot add a companion object
*/

class Book{
    companion object {}
}

fun Book.Companion.printMe(){
    println("Book has been printed")
}
    
fun main(){
    val name="RANJEET"
    println(name.slim())
    println(name.betterLength)
    Book.printMe()
}
