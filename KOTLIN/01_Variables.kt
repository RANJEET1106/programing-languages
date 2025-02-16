// val -> immutable
// var -> mutable
// by default type is not nullable


// Variable Types
// val myNum: Int = 5                 Int
// val myDoubleNum: Double = 5.99     Double
// val myLetter: Char = 'D'           Char
// val myBoolean: Boolean = true      Boolean
// val myText: String = "Hello"       String

val name:String="RANJEET"  // Global Variable

fun main(){
    var greeting:String="Hello" //Local Variable

    println(greeting) // after printing puts cursor to new line
    print(name) // after printing puts cursor at the end of word
    println()

    // name="ABC" : this is not going to work because name is immutable
    greeting="Hii"
    println(greeting)
    println(name)

    var message:String?="Test message" // Nullable variable
    println(message)
    message=null  // can be assigned with null
    println(message)


}