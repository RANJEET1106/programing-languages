class PostItNote(){
    var message: String="No Message"

    fun updateMessage(message:String){
        this.message=message
    }

    fun printMessage(){
        println(message)
    }
}

fun main(){
    val note=PostItNote()
    println(note.message)
    note.updateMessage("Metting at 5")
    println(note.message)
    note.printMessage()
}

