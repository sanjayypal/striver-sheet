int lowerBound(vector<int> arr, int n, int x) {
	int low=0,high=n-1,ans=n,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]>=x)
		{
			ans=mid;
			high = mid-1;
		}
		else
		low = mid+1;
	}
	return ans;
}
