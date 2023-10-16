#include<bits/stdc++.h>
int sumofD(vector<int>& arr,int div);
int smallestDivisor(vector<int>& arr, int limit)
{
	int low=1,high=*max_element(arr.begin(),arr.end());
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(sumofD(arr,mid)<=limit)
		high = mid-1;
		else
		low=mid+1;
	}
	return low;
}

int sumofD(vector<int>& arr,int div)
{
	int sum = 0;
	for(int i=0; i<arr.size(); i++)
	{
		sum+=ceil((double)arr[i]/(double)div);
	}
	return sum;
}