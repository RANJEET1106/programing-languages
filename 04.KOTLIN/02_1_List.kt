fun main(){
    // list containg sae type of elemtnt
    // list can contain duplicate elements and null values 
    // list is immutable

    var colour=listOf("Red","Green","Blue","Red",null);
    println(colour);    // [Red, Green, Blue, Red, null]

    // if we created empty list we have to specify the element type it is going to store
    var colours2=listOf<String> ();
    println(colours2);  // []

    // retriving elements
    // indexing starts from 0

    println(colour[4]);     // null
    println(colour.get(1));     // Green

    // size
    println(colour.size);   // 5
    println(colour.contains("Red"));    // true
    println(colour.contains("Pink"));   // false

    var newColour=listOf("Red","Green","Pink");
    println(colour.containsAll(newColour));     // false
    println(colour.indexOf("Red"));     // 0
    println(colour.lastIndexOf("Red"));     // 3
}