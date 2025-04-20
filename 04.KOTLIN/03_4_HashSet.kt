fun main(){
    // similar to set
    // We can add and delete values of hash set

    var numbers=hashSetOf(12,117,19,23,29,23,null);
    println(numbers);

    var numbers2=hashSetOf<Int>();
    println(numbers2);

    numbers.add(44);
    println(numbers);

    var newNumbers=hashSetOf(15,16);
    numbers.addAll(newNumbers);
    println(numbers);

    numbers.remove(117);
    println(numbers);

    numbers.removeAll(newNumbers);
    println(numbers);

    var newNumbers2=setOf(12,117,19,23,67,89);
    var numbers3=numbers.intersect(newNumbers2);
    println(numbers3);

    numbers.clear();
    println(numbers);
}