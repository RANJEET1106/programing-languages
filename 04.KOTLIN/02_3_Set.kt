fun main(){

    // set stores unique elements
    // order does not have any significance
    // set can contain null element
    var numbers=setOf(12,117,19,23,29,23,null);
    println(numbers);

    var numbers2=setOf<Int>();
    println(numbers2);

    println(numbers.size);
    println(numbers.contains(117));

    var newNumbers=setOf(23,24);
    println(numbers.containsAll(newNumbers));

    println(numbers.isEmpty());


}