#include<bits/stdc++.h>
int findMaxi(vector<int> arr);
int hours(vector<int> arr,int mid,int h);

int minimumRateToEatBananas(vector<int> arr, int h) {
    int maxi = findMaxi(arr);
    int low = 1,high = maxi,ans = INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int total_hours = hours(arr,mid,h);
        if(total_hours<=h)
        {
            ans = mid;
            high = mid-1;
        }
        else
        low = mid+1;
    }
    return ans;
}

int findMaxi(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int hours(vector<int> arr,int mid,int h)
{
    int n = arr.size();
    int ans=0,total;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%mid==0)
        total = arr[i]/mid;
        else
        total = arr[i]/mid + 1;
        ans = ans + total;
    }
    return ans;
}




// Ailter

