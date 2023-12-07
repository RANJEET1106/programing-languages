#include <iostream>
#include <algorithm>
using namespace std;

//REVERSE STRING
void reverse(string &s,int i,int j)
{
    if(i>j) return;
    swap(s[i],s[j]);
    i++;j--;
    reverse(s,i,j);
}

//PALINDROME
bool checkPalindrome(string s,int i,int j)
{
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return checkPalindrome(s,++i,--j);
}
int main()
{
    string s="abcdefghijkl";
    reverse(s,0,12);
    cout<<s<<endl;
    string s1="aba";
    cout<<checkPalindrome(s1,0,2)<<endl;
}