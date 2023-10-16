#include<bits/stdc++.h>
int findCeil(int arr[],int n,int x);
int findFloor(int arr[],int n,int x);

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr,arr+n);
	int f = findFloor(arr,n,x);
	int c = findCeil(arr,n,x);
	return make_pair(f,c);
}
int findFloor(int arr[],int n,int x)
{
    int low=0,high=n-1,ans=-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]<=x)
		{
			ans = arr[mid];
			low = mid+1;
		}
		else
		high = mid-1;
	}
	return ans;
}

int findCeil(int arr[],int n,int x)
{
      
    int low=0,high=n-1,ans=-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]>=x)
		{
			ans = arr[mid];
			high = mid-1;
		}
		else
		low = mid+1;
	}
	return ans;
}
