import kotlin.random.Random

var board=arrayListOf<ArrayList<String>>();

fun printBoard(){
    println("-------------");
    for(i in 0..2){
        for (j in 0..2){
            when(board[i][j]){
                "X"-> print("| X ");
                "O"-> print("| O ");
                else-> print("|   ");
            }
        }
        println("|");
        println("-------------");
    }
}

fun checkWinner (player:Boolean):Boolean{
    var won=false;
    var checkSymbol=if(player) "X" else "O";
    for(i in 0..2){
        // horizontal wins
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][2]==checkSymbol){
            won=true;
            break;
        }

        // verrtical check
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[2][i]==checkSymbol){
            won=true;
            break;
        }
    }
    // diagonal wins

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[2][2]==checkSymbol)
        won=true;
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[1][1]==checkSymbol)
        won=true;

    return won;
}

fun checkBoardFull():Boolean{
    var boardFull=true;
    for(i in 0..2){
        for(j in 0..2){
            if(board[i][j]=="") {
                boardFull=false;
                break;
            }
        }
    }
    return boardFull;
}

fun placeComputerMove(){
    var i:Int;
    var j:Int;
    do{
        i=Random.nextInt(3);
        j=Random.nextInt(3);
    }while(board[i][j]!="")

    board[i][j]="O";

}

fun main(){
    for (i in 0..2){
        var row=arrayListOf<String>();
        for(j in 0..2)
            row.add("");
        board.add(row);
    }
    printBoard();
    var continueGame=true;

    do{
        println("please enter the position like 1,1")
        val input=readLine()?:"";
        if(input.isEmpty()){
            println("Enter a valid choice")
            continue;
        }
        
        
        try{
            val positions=input.split(",");
            var x=positions[0].trim().toInt();
            var y=positions[1].trim().toInt();
            if(board[x-1][y-1]!=""){
                println("That Position is already taken try again")
                continue;
            }
            else{
                board[x-1][y-1]="X";
                printBoard();
            }
        }catch(e:Exception){
            println("Enter the valid input and try again");
            continue;
        }

        val playerWon=checkWinner(true);
        if(playerWon){
            println("Yooo You Won");
            continueGame=false;
        }

        var boardFull=checkBoardFull()
        if(continueGame && !boardFull){
            placeComputerMove();
            printBoard();
            val computerWon=checkWinner(false);
            if(computerWon){
                println("Computer Won");
                continueGame=false;
            }
        }

        
        if(!playerWon && boardFull && continueGame){
            println("It's a tie");
            continueGame=false;
        }
        
    }while(continueGame)
}