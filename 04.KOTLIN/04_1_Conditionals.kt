/*
1. If Else

if(condition){
    expression
}
else if(condition2){
    expression
}
else{
    expression
}

var response=if(condition1) expression 1 else expression2
response will store the ans returned by if else statement

*/

fun main(){
    var colour=listOf("Red","Green","Blue","Red",null);
    var favColour="Blue";
    if(favColour in colour)
        println("We have our fav colour");
    else 
        println("Fav colour not found");

    if(5 in 1..5) // range includes last number also 
        println("5 is in range");
    else 
        println("Not in range")

    // similarly we can use !in

    // when statement
    // when can return a value
    var action:String;
    var animal="cat";
    when(animal){
        "cat"->{
            action="Pet it";
        }
        "dog"->{
            action="Feed it";
        }
        else->{
            action="Google it";
        }
    }
    println(action);

    var name="RANJEET";
    when(name.length){
        in 1..5 -> println("short");
        in 6..10 -> println("medium");
        in 11..15 -> println("Long");
        else -> println("invalid");
    }
    
}