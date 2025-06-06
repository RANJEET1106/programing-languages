// Returns the object if the predicate value to true
//  Otherwise return null
import kotlin.random.Random
fun main(){
    val number =Random.nextInt(100)
    val evenOrNull = number.takeIf { it%2==0 }

    val oddOrNull= number.takeUnless { it%2==0 } 
    // returns the object if predicate is false 
    //  otherwise return null

    println("The number is $number")
    println("The even number is $evenOrNull")
    println("The odd number is $oddOrNull")
}