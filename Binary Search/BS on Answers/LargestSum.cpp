#include<bits/stdc++.h>
int Array(vector<int> arr,int pages)
{
    int Stu = 1,pagesStudent=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(pagesStudent+arr[i]<=pages)
        pagesStudent+=arr[i];
        else {
        Stu++;
        pagesStudent = arr[i];
        }
    }
    return Stu;
}
int largestSubarraySumMinimized(vector<int> arr, int k) {
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    if(arr.size()<k)
    return -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(Array(arr,mid)>k)
        low = mid+1;
        else
        high = mid-1;
    }
    return low;
}