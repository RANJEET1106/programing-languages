// Overloading
// Two functions having same name and different number or types of parameter

fun multiply(number:Int) =number*2;
fun multiply(number:Int,multiplyer:Int) =number*multiplyer;


// Scope
// Variable declared inside e function only exist in that function
// Changes maid to the value of variable which is declared outside the function 
// Don't reflect in main function
fun checkScope(year:Int) {
    var year1=year;
    println("Argument of fuunction is $year1");
    var year2=1985;
    println("Year inside function is $year2");

}

// Vararg
// function can have variable number of arguments

fun sayHello(vararg names:String){
    for (name in names){
        println("Hello $name");
    }
}

fun sumOfIntegers(vararg nums:Int):Int{
    var sum=0;
    for(num in nums){
        sum+=num;
    }
    return sum;
}

// Local function
// function inside a function
// only the parent function can access it not any other function


// lambda function as a parameter
fun sayHello2(names:ArrayList<String>,doSomething:(String)->Unit){
    for(name in names){
        doSomething(name)
    }
}


fun main(){
    println(multiply(3));
    println(multiply(3,5));

    var year=2025;
    checkScope(year);
    println("Year in main function s $year");

    sayHello("RANJEET","Akalank","Yash","Mayank");
    println("Sum of integers is ${sumOfIntegers(23,25,69,65,53,89)};")

    // lambda function is an anonymus function 
    // lambda functtion can be assigned to the variable
    // this function can be used as parameter to higher order function
    var names=arrayListOf("RANJEET","Akalank","Yash");
    var myLambda={name:String->println("Hello $name")};
    sayHello2(names) {name:String->println("Hello $name")}
    sayHello2(names,myLambda);

    // Common higher order functions
    var sizes=names.map{it.length};
    println(sizes);
    val sorted=names.sortedBy { it.length };
    println(sorted);

    var numbers=listOf(2,3,23,25,69,65,53,89);
    var subset=numbers.map{
        if(it%2==1) it*2;
        else it/2;

    }
    .filter{it > 25}

    println(subset);
}