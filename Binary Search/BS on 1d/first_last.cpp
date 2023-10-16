// int lower_bound(vector<int> arr,int n,int x);
// int upper_bound(vector<int> arr,int n,int x);

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     int f = lower_bound(arr,n,k);
//     if(f==n || arr[f]!=k)
//     return {-1,-1};
//     return {f, upper_bound(arr, n, k) - 1};
// }

// int lower_bound(vector<int> arr, int n, int x) {
// 	int low=0,high=n-1,ans=n;
// 	while(low<=high)
// 	{
// 	   int mid=(low+high)/2;
// 		if(arr[mid]>=x)
// 		{
// 			ans=mid;
// 			high = mid-1;
// 		}
// 		else
// 		low = mid+1;
// 	}
// 	return ans;
// }

// int upper_bound(vector<int> arr,int n,int x)
// {
// 	int ans = n;
// 	int low = 0,high = n-1;
// 	while(low<=high)
// 	{
// 		int mid = (low+high)/2;
// 		if(arr[mid]>x)
// 		{
// 			ans = mid;
// 			high = mid-1;
// 		}
// 		else
// 		low = mid+1;
// 	}
// 	return ans;
// }




// optimal solution
#include<bits/stdc++.h>
int lower_bound(vector<int> arr,int n,int x);
int upper_bound(vector<int> arr,int n,int x);

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int f=lower_bound(arr,n,k);
    if(f==-1)
    return {-1,-1};
    int l=upper_bound(arr,n,k);
    return {f,l};
}

int lower_bound(vector<int> arr,int n,int k)
{
    int ans = -1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            high = mid-1;
        }
        else if( arr[mid]>k)
        high = mid-1;
        else
        low = mid+1;
    }
   return ans;
}


int upper_bound(vector<int> arr,int n,int k)
{
    int ans = -1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            low = mid+1;
        }
        else if( arr[mid]>k)
        high = mid-1;
        else
        low = mid+1;
    }
   return ans;
}