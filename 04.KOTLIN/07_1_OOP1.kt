class Car{
    var model: String?=null;
    var topSpeed=100;

    fun start(){
        println("Starting the $model")
    }

    fun drive(speed: Int){
        println("Drivig at a speed of $speed")
    }
}

// Objet Construct
object DatabaseAccess{
    var connected= false;
    fun connect(){
        connected=true;
        println("Connected to the Database");
    }
    fun disconnect(){
        connected=false;
        println("Disconnected from the databse")
    }

}

fun main() {
    val myCar:Car=Car()
    val yourCar=Car()

     myCar.model="BMW";
     yourCar.model="Toyota";

     myCar.start();
     myCar.drive(50);

    yourCar.start();
    yourCar.drive(100);


    // accessing function without object
    DatabaseAccess.connected=true
    if(DatabaseAccess.connected)
        DatabaseAccess.disconnect();
    else
        DatabaseAccess.connect();

    println("Databse is Connected: ${DatabaseAccess.connected}")

}