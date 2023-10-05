#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a) {
    int temp = 1;
    for(int i = 0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        temp = 0;
    }
    return temp;
}

int main()
{
    vector<int> arr = {1,2,2,3,3,6,2};
    cout<<isSorted(7,arr);
    return 0;
}