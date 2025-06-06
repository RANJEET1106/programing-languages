// Define a collection of constants
// the constants defined are objects
// the constants have properties

enum class Colors{
    RED,
    GREEN,
    BLUE
}

enum class Colors2(val timeUsed: Int){
    RED(34),
    GREEN(12),
    BLUE(45)
}

fun main(){
    val color= Colors.RED
    when(color){
        Colors.RED -> println("You chose red")
        Colors.BLUE -> println("You choose blue")
        Colors.GREEN -> println("You chose green")
    }

    println(Colors2.RED.timeUsed)
    println(Colors2.GREEN.name)
    println(Colors2.BLUE.ordinal)
}