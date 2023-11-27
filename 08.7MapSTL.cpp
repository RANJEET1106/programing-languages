#include <iostream>
#include <map>
//You can use #include <bits/stdc++.h> to include every library in compitative programing
using namespace std;

int main()
{
    map<int,int> m;
    m[1]=1;
    m[3]=9;
    m[2]=4;
    m[3]=10;

    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;//sorted order

//CAPACITY

    cout<<"Is the map is empty or not "<<m.empty()<<endl;
    cout<<"Size of the map is "<<m.size()<<endl;
    cout<<"Maximum size of the map is "<<m.max_size()<<endl;

//Element Access

    cout<<"Element at the position 2 is "<<m[2]<<endl;
    cout<<"Element at the position 2 is "<<m.at(2)<<endl<<endl;

//MODIFIERS

    cout<<"Inserting pair 5,25"<<endl;
    m.insert({5,25});
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl; 
    cout<<endl;

    cout<<"Erasing pair 5,25"<<endl;
    m.erase(5);
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;   

    //m.clear()used to clear the map

//OPERATIONS

    auto it=m.find(3);//return the iterator to the element
    cout<<(*it).second<<endl;

    cout<<"key 3 is present or not "<<m.count(3)<<endl;

    it=m.lower_bound(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;
    it=m.upper_bound(2);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    auto i=m.equal_range(1);
    cout<<(i).first->first<<" "<<(i).first->second<<endl;
    cout<<(i).second->first<<" "<<(i).second->second<<endl;


}
