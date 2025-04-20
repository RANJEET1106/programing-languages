fun main(){
    // Hash maps can be modified

    var count=hashMapOf(Pair(1,"One"),Pair(2, "Two"),Pair(3,"Three"));
    count.put(5,"Five");
    count[4]="Four";
    println(count);

    var count2=hashMapOf(Pair(6,"Six"),Pair(7,"Seven"));
    count.putAll(count2);
    println(count);

    count.remove(6);
    println(count);

    count.replace(7,"seven seven");
    println(count);

    count2.clear();
    println(count2);
}