#include<bits/stdc++.h>
int findDays(vector<int>& w,int d)
{
    int days = 1,load=0;
    for(int i=0; i<w.size(); i++)
    {
        if(load+w[i]>d)
        {
            days=days+1;
            load=w[i];
        }
        else
        load = load+w[i];
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    while(low<=high)
    {
        int mid = (low+high)/2;
        int days = findDays(weights,mid);
        if(days<=d)
        high = mid-1;
        else
        low = mid+1;
    }
    return low;
}