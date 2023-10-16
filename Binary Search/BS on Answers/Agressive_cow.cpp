#include<bits/stdc++.h>
bool CanwePlace(vector<int> &stalls,int dist,int cows)
{
    int n=stalls.size();
    int cnt=1;
    int last = stalls[0];
    for(int i=1; i<n; i++)
    {
        if(stalls[i]-last>=dist)
        {
            cnt++;
            last=stalls[i];
        }
        if(cnt>=cows)
        return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int high = stalls[n-1]-stalls[0];
    int low = 1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(CanwePlace(stalls,mid,k)==true)
         low = mid+1;
        else
         high = mid-1;
    }
    return high;
}