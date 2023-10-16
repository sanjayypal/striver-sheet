#include<bits/stdc++.h>
int Possible(vector<int> &arr,int mid)
{
    int cnt=1,size=0;
    for(int i=0; i<arr.size(); i++)
    {
        if((arr[i]+size)<=mid)
        size+=arr[i];
        else
        {
            cnt++;
            size=arr[i];
        }
    }
    return cnt;
}
int findLargestMinDistance(vector<int> &arr, int k)
{
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high)
    {
        int mid = (low+high)/2;
        int ans = Possible(arr,mid);
        if(ans>k)
        low=mid+1;
        else
        high = mid-1;
    }
    return low;
}