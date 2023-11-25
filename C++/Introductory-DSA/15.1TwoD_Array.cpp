#include <iostream>
#include <vector>
using namespace std;

#define TwoDvec vector<vector<int>>

TwoDvec getInput(int n,int m=-1)
{
    if(m==-1) m=n;
    TwoDvec v(n);
    for(int i=0;i<n;i++)
    {
        v[i].resize(m);
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    }
    return v;
}
void getOutput(TwoDvec &v)
{
    int n=v.size();
    int m=v[0].size();
    cout<<"Your metrix is "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

int* binarySearchMatrix(TwoDvec &matrix,int target)
{
    static int ans[2]={-1,-1};

    int row=matrix.size();
    int col=matrix[0].size();

    int start=0;
    int end=row*col-1;

    //finding the middel index
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element=matrix[mid/col][mid%col];
        
        if(element==target)
        {
            ans[0]=mid/col;
            ans[1]=mid%col;
        }

        if(element<target) start=mid+1;
        else end=mid-1;

        mid=start+(end-start)/2;
    }
    return ans;
}

//another searching method in sorted array

int* searchMatrix(TwoDvec &matrix,int target)
{
    static int ans[2]={-1,-1};
    
    int row=matrix.size();
    int col=matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0)
    {
        int element=matrix[rowIndex][colIndex];
        if(element==target) 
        {
            ans[0]=rowIndex;
            ans[1]=colIndex;
        }
        if(element<target) rowIndex++;
        else colIndex--;
    }
    return ans;
}

//MULTIPLICATION OF 2D VECTORS

TwoDvec matMultiply(TwoDvec &matrix1, TwoDvec &matrix2)
{
    int row1=matrix1.size();
    int col1=matrix1[0].size();
    int row2=matrix2.size();
    int col2=matrix2[0].size();
    int n=row1;
    TwoDvec v(row1);
    
    if(col1!=row2)
    {
        v={{-1}};
        return v;
    }

    for(int i=0;i<row1;i++)
    {
        v[i].resize(col2);
        for(int j=0;j<col1;j++)
        {
            for(int k=0;k<col1;k++)
            {
                v[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    return v;
}
int main()
{
    //taking input
    int n,m;
    cout<<"Enter the dimention of matrix "<<endl;
    cin>>n;
    cout<<"Enter the element of matrix"<<endl;
    TwoDvec vec=getInput(n);
    getOutput(vec);
    
    cout<<"Enter the element to search "<<endl;
    cin>>n;
    int *ans=binarySearchMatrix(vec,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    int *ans1=searchMatrix(vec,n);
    cout<<ans1[0]<<" "<<ans1[1]<<endl;

    cout<<"Enter the dimention of matrix "<<endl;
    cin>>n>>m;
    cout<<"Enter the first matrix"<<endl;
    TwoDvec vec1=getInput(n,m);
    cout<<"Enter the dimention of second matrix (space saperated)"<<endl;
    cin>>n>>m;
    cout<<"Enter the second Matrix"<<endl;
    TwoDvec vec2=getInput(n,m);

    cout<<"Multiplication of two matrix is"<<endl;
    TwoDvec vec3=matMultiply(vec1,vec2);
    getOutput(vec3);
}