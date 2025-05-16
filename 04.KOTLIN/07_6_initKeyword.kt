class Car3{
    val model="BMW"
    val topSpeed=100
    // I class no matter what init block execute first
    // before any constructor and function
    init{
        println("This car is a $model and has a top speed of $topSpeed")
    }
}

fun main(){
    val myCar=Car3()
    print(myCar.model)
}