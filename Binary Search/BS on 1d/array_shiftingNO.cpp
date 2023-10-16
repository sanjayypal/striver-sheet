#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
	int n = arr.size();
	int ans = INT_MAX,sol=-1;
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[low]<=arr[mid])
		{
			if(ans>arr[low])
            sol = low;
            ans = arr[low];
			low=mid+1;
		}
		else if(arr[mid]<=arr[high])
		{
			if(ans>arr[mid])
            sol = mid;
            ans = arr[mid];
			high = mid-1;
		}
	}
	return sol;
}
