//  Allows us to run code on an object
// We can access the result as a lambda argument "it" by default

fun main(){
    val animals=listOf("cat","dog","mouse","bear","zebra")
    animals.map{it.length}
    .filter{it>3}
    // .let{
    //     println(it)
    //     println("Size of list is ${it.size}")
    // }
    // if he block of code contains a single function class,
    // we can use the methode reference ::
    .let(::println)


    // A common use is to use let to filter for non-null variables

    val name=readLine()
    name?.let{
        println(name)
    }

}