// Used to sore the data
// Primary constructor has at least one parameter
// All primary constructor parameters need to be val or var
// can have a body but not required

data class User(
    val name:String,
    val email:String,
    val password:String
)

class RegularUser(
    val name:String,
    val email:String,
    val password:String
)

fun main(){
    val myUser1= User("John","john@gmail.com","johnIsCool")
    println(myUser1)
    val myUser2= User("John","john@gmail.com","johnIsCool")

    val myRegularUser1=RegularUser("RANJEET", "abc@gmail.com", "Password")
    val myRegularUser2=RegularUser("RANJEET", "abc@gmail.com", "Password")

    println(myUser1 == myUser2) // comapre actual data and not object references
    println(myRegularUser1==myRegularUser2)

    println(myUser1.toString())
    println(myRegularUser1.toString())

    val user1=myUser1.copy(email="john1@gmail.com")
    println(user1)



}