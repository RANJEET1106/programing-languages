import kotlin.random.Random


var words = listOf(
    "apple", "banana", "grape", "orange", "mango", "peach", "cherry", "melon", "kiwi", "plum",
    "coffee", "butter", "cheese", "bacon", "bread", "pizza", "salad", "sugar", "honey", "donut",
    "forest", "desert", "island", "ocean", "valley", "mountain", "canyon", "river", "glacier", "volcano",
    "tiger", "lion", "zebra", "giraffe", "monkey", "rabbit", "panda", "elephant", "koala", "hippo",
    "engine", "piston", "rocket", "circuit", "binary", "sensor", "gadget", "drone", "router", "modem",
    "pirate", "castle", "dragon", "sword", "wizard", "goblin", "knight", "tunnel", "battle", "crown",
    "pencil", "eraser", "notebook", "marker", "stapler", "scissors", "glue", "ruler", "chalk", "folder",
    "planet", "comet", "galaxy", "meteor", "nebula", "saturn", "venus", "earth", "jupiter", "uranus",
    "guitar", "piano", "violin", "trumpet", "drums", "flute", "harp", "banjo", "saxophone", "cello",
    "shirt", "pants", "jacket", "socks", "scarf", "gloves", "sweater", "shoes", "hat", "belt"
);
var word="";
var guesses = arrayListOf<Char>();
var remainingGuesses=6;
var mistakes=0;

fun setupGame(){
    var wordIndex=Random.nextInt(words.size);
    word=words[wordIndex].uppercase();
    // println(word);
    for(i in word.indices){
        guesses.add('_');
    }
    
    var gameOver=false;
    do{
        printGameStatus()
        print("Enter a letter: ")
        var input:String=readLine()?:"";
        if(input.isEmpty())
            println("Not a valid input Please try again");
        else{
            val letter: Char=input[0].uppercaseChar()
            if (word.contains(letter)){
                for(i in word.indices){
                    if(word[i]==letter)
                        guesses[i]=letter;
                }
                if(!guesses.contains('_'))
                    gameOver=true;
            }
            else{
                println("Sorry thats not the part of word");
                remainingGuesses--;
                mistakes++;
                if(mistakes==6) gameOver=true;
            }
        }
    }while(!gameOver)
    if(mistakes==6){
        printMistakes(mistakes)
        println("Sorry You lost and word was $word")
    }
    else{
        println("Congratulations You Win");
    }
}

fun printGameStatus(){
    printMistakes(mistakes);
    print("Word: ")
    for(element in guesses)
        print("$element ")
    println("\nYou have $remainingGuesses guess(es) left")
}

fun printMistakes(num:Int){
    println("  |-------|-");
    println("  |       |");
    if (num==0)
        println("  |       ");
    else if(num>=1)
        println("  |       O");
    if (num==2)
        println("  |       |");
    else if (num==3)
        println("  |      /|");
    else if (num>=4)
        println("  |      /|\\");
    if(num>=2)
        println("  |       |");
    if(num==5)
        println("  |       /");
    else if(num==6)
        println("  |      / \\");
    else println("  |       ");
    println(" /|\\     ");
    println("/ | \\    ");
}



fun main(){
    setupGame();
}