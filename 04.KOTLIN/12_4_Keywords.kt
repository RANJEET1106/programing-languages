import kotlin.random.Random

/*
lateinit-
Allow us to create non null, non initialized variables
Need to initialize thevariable before using it
Accessing it before initializing it htrows an exception
Can be used only on var vaiables
use .isInitialized to check initialization
*/

/*
lazy-
Lazy variables are variables that are initialized when needed
Useful to save memory inn case the variable is never accessed
*/

fun getNetworkService2()= "Network Service"

fun main(){
    lateinit var networkService: String
    networkService = getNetworkService2()
    println(networkService)

    val someLargeVariable: String by lazy{
        "Some large value"
    }

    if(Random.nextInt() %2 ==0)
        println(someLargeVariable)
}