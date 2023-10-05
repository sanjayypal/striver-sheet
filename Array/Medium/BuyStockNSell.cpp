#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    int maxi = 0,mini= INT_MAX;
    int n = arr.size();
    for( int i=0; i<n; i++)
    {
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]-mini);
    }
    return maxi; 
}