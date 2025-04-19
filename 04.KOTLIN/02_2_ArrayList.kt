fun main(){
    // similar to list jst mutable
    var colour=arrayListOf("Red","Blue");
    var colour2=arrayListOf<String>();
    println(colour);    // [Red, Blue]
    println(colour2);   // []

    colour.add("Yellow");
    println(colour);    // [Red, Blue, Yellow]

    // add another collection 
    var more_colours=arrayListOf("Pink","Orange");
    colour.addAll(more_colours);
    println(colour);    // [Red, Blue, Yellow, Pink, Orange]

    colour.remove("Red"); // if array cotnains duplicae then only first gets removed
    println(colour);    // [Blue, Yellow, Pink, Orange]
    colour.removeAll(more_colours);
    println(colour);    // [Blue, Yellow]

    colour.removeAt(1);
    println(colour);    // [Blue]

    colour=arrayListOf("Red","Green","Blue","Red","Pink","Orange");
    colour.set(0,"Crimson Red");
    println(colour);

    var subColour=colour.subList(1,3);  // exclude 3
    println(subColour);

    colour.clear();
    println(colour);
    println(colour.isEmpty());
    


}