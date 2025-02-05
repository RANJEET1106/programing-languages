#include <iostream>
#include <vector>

using namespace std;

void solveSubset(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solveSubset(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solveSubset(nums, output, index + 1, ans);
}

void solveSubsequence(string str,string output,int index,vector<string>& ans){
    //base case
    if(index>=str.length()){
        if(output.length()==0) 
            return;
        ans.push_back(output);
        return;
    }

    //exclude
    solveSubsequence(str,output,index+1,ans);

    //include
    char element=str[index];
    output.push_back(element);
    solveSubsequence(str,output,index+1,ans);

}

void solveLetterCombination(string digit, string output, int index, vector<string>& ans, string mapping[]){
    
    // base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int number=digit[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solveLetterCombination(digit,output,index+1,ans,mapping);
        //backtrack
        output.pop_back();
    }
}


void solvePermute(vector<int>nums, vector<vector<int>>& ans, int index){

    //base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solvePermute(nums,ans,index+1);
        //backtrack
        swap(nums[index],nums[j]);
    }
}

// Return the powerset of given array
// power set is set of all subsets
// leetcode 78: subset https://leetcode.com/problems/subsets/description/
// solution https://leetcode.com/problems/subsets/submissions/1531399083/
vector<vector<int>> powersets(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solveSubset(nums, output, index, ans);
    return ans;
}


// return all subsequences of given string
vector<string> subsequences(string str){
    vector<string> ans;
    string output="";
    int index=0;
    solveSubsequence(str,output,index,ans);
    return ans;
}


//Return all possible output of keys pressed 
//Leetcode 17 https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
//solution https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1532426219/
vector<string> letterCombinations(string digits){
    vector<string > ans;
    if(digits.length()==0) return ans;
    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solveLetterCombination(digits,output,index,ans,mapping);
    return ans;

}


//Given an array nums of distinct integers, return all the possible permutations
//leetcode 46 https://leetcode.com/problems/permutations/description/

vector<vector<int>>permute(vector<int>& nums){
    vector<vector<int>> ans;
    int index=0;
    solvePermute(nums,ans,index);
    return ans;
}

int main(){
    vector<int> v={1,2,3};
    vector<vector<int>> ans= powersets(v);
    for(auto i:ans){
        for(int j:i) cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;

    string str="abc";
    vector<string> ans1=subsequences(str);
    for(auto i:ans1) cout<<i<<" ";
    cout<<endl;

    str="23";
    ans1=letterCombinations(str);
    for(auto i:ans1) cout<<i<<" ";
    cout<<endl;

    ans=permute(v);
    for(auto i:ans){
        for(int j:i) cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
}