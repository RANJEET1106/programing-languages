#include <iostream>
#include <vector>
using namespace std;


bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> m){
    
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }
    return false;
}

void solveFindPath(vector<vector<int>>& m,int n,vector<string>& ans,int x,
                    int y,vector<vector<int>> visited, string path){
    
    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;

    //Down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solveFindPath(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //Left
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solveFindPath(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //Right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solveFindPath(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //Up
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solveFindPath(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    visited[x][y]=0;
}


//matrix with 0 and 1 . 1 is for open path and 0 is for closed path
// print the path

vector<string> findPath(vector<vector<int>>& m,int n){
    vector<string> ans;
    int srcx=0;
    int srcy=0;

    vector<vector<int>> visited= m;
    // intitiate visited vector with 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }

    string path="";
    solveFindPath(m,n,ans,srcx,srcy,visited,path);
    return ans;
}


int main(){
    vector<vector<int>> m={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string> ans=findPath(m,4);
    for(auto i:ans) cout<<i<<endl;
}