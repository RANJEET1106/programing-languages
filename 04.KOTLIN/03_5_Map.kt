fun main(){

    // Maps are immutable
    var count=mapOf(Pair(1,"One"),Pair(2, "Two"),Pair(3,"Three"));
    println(count);

    var count2=mapOf<Int,String>();
    println(count2);
    println(count.get(2));
    println(count[2]);

    println(count.keys); // gives all keys
    println(count.values); // gives all values

    println(count.size);
    println(count.containsKey(2));
    println(count.containsValue("Five"));

    println(count.isEmpty());
    println(count.isNotEmpty());


}