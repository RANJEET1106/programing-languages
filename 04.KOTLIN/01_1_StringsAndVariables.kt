// Vlue of constant do not change
// const are available at complite time and are mot calculated at execution time
// top level :- declared outside functions
// conventions names are in all caps

const val URL="https://www.google.com";

fun main(){
    // Strings can contain any number,letters and characters or symbol except double quote and backslash 
    // if string contains ""(double quotes)or  /(backslash) it need to be escaped
    // string is zero or more character surrounded by double quotes
    println("\n\n1.Strings");
    println("Hello World");

    println("Answer is \"Yes\"");
    println("Answer is yes\\no");


    // variable name can contain letters,numbers and underscores
    // variable name must start with letters or underscore
    // names can be anythong except kotlin keyword
    // use camalCase for variable name

    println("\n\n2.Variable");
    var tvShows="many";
    println(tvShows);
    var age=25;
    println(age);

    val colour="blue"; //We can't change variable declared with val 
    // It is the read only 
    println(colour);


    // Strings in kotlin can contain expressions
    // The expression is evaluated and inserted(concatinated) in the string
    // an expresson starts with $ sign and can contain braces {}
    println("\n\n3.String Templates");
    println("my fav colour is $colour");
    println("I have ${1+1} cats");

    println("Accessing URL $URL")
}
