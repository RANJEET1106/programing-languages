class Car1{
    constructor(){
        model="No Model";
        topSpeed=150;
    }
    constructor(newModel:String){
        model=newModel
        topSpeed=150;
    }
    constructor(newModel:String,newSpeed:Int){
        model=newModel
        topSpeed=newSpeed
    }
    var model:String?=null ;
    var topSpeed=100
}

class Car2(var newModel:String,var newSpeed:Int){ // We can declare like this if we have one constructor
    var model=newModel
    var speed=newSpeed
}

fun main(){
    val myCar=Car1()
    val yourCar=Car1("BMW")
    val hisCar=Car1("Fortuner",100)

    val herCar=Car2("Ignis", 60)

    println(myCar.model)
    println(yourCar.model)
    println(hisCar.model)
    println(herCar.model)

}