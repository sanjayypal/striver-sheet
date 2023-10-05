#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter the length of pascal triangle :"<<endl;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            if(i==j || j==0)
            arr[i][j] = 1;
            // else if(i<j)
            // break;
            else
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i<j)
            break;
            else
            {
            cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

// Alternative way to solve 
// int ncr(int n,int r);
// vector<vector<int>> pascalTriangle(int n) {
//     vector<vector<int>> ans;
//     for(int row = 1; row<=n; row++)
//     {
//         vector<int> tempLst;
//         for(int col = 1; col<=row; col++)
//         {
//             tempLst.push_back(ncr(row-1,col-1));
//         }
//         ans.push_back(tempLst);
//     }
//     return ans;
// }

// int ncr(int n,int r)
// {
//     long long res = 1;
//     for(int i = 0; i<r; i++)
//     {
//         res = res*(n-i);
//         res = res/(i+1);
//     }
//     return (int)(res);
// }