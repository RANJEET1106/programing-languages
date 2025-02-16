fun main() {
    val name: String? = null
    if (name != null) println(name) else println("RANJEET")

    // when is like switch case
    when (name) {
        null -> println("RANJEET")
        else -> println(name)
    }

    // using conditional statement to assign values
    var nameToPrint = if (name != null) name else "RANJEET"
    println(nameToPrint)

    nameToPrint =
            when (name) {
                null -> "RANJEET"
                else -> name
            }
    println(nameToPrint)

    // for loop
    println("\nFor Loop")
    val nums = arrayOf(1, 5, 10, 15, 20)
    for (x in nums) {
        print(x)
        print(" ")
    }
    println()

    for (chars in 'a'..'z') {
        print(chars)
        print(" ")
    }
    println()

    for (digits in 5..15) {
        print(digits)
        print(" ")
    }
    println("\n")

    // while loop
    println("While Loop")
    var i = 0
    while (i < 5) {
        print(i)
        print(" ")
        i++
    }
    println("\n")

    // Do While Loop
    println("Do While Loop")
    var j = 0
    do {
        print(j)
        print(" ")
        j++
    } while (j < 5)
}
