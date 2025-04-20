fun main(){
    /*
    for(int in list){
        expression
    }
    for(i in 1..12 ){
        expression
    }
    for(i in 10 downTo 0 step 2){ counts from 10 to 0 by the diff of two
        expression
    }
    */

    for(i in 1..10 step 2){
        println(i);
    }
    var i=0;
    while(i<10){
        print(" $i");
        i++;
    }
    println("")
    do{
        print(" $i");
        i++;
    }while(i<10)
    // Do while loop execute exactly once

    // break -> breaks the loop
    // continue -> skips the steps below and proceeds with next step


    // lable
    loop@ for(i in 1..10){ // loop is just a lable we can replace with anything
        for(j in 1..3){
            if(i%3==0) break@loop; // break outside both loops
            println("$i $j");
        }
    }

}