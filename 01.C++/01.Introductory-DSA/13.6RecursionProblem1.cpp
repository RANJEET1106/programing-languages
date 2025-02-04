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

int main(){
    vector<int> v={1,2,3};
    vector<vector<int>> ans= powersets(v);
    for(auto i:ans){
        for(int j:i) cout<<j<<" ";
        cout<<endl;
    }

    string str="abc";
    vector<string> ans1=subsequences(str);
    for(auto i:ans1) cout<<i<<" ";
    cout<<endl;
}