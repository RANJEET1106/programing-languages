import java.lang.Exception
import java.lang.IllegalStateException
fun main(){
    var test=readLine()
    try{
        println(test?.toInt());
    }
    catch(e:Exception){
        println("An Exception Occured ${e.message}");
        
        // optionally we can print stack trace
        // e.printStackTrace();
    }
    // finally block always gets executed
    finally{
        println("Execution completed")
    }

    // throw : we can generate our own custom eeptions

    test=readLine();
    println(test);
    throw IllegalStateException("I dont like this input");

}