int lower_bound(vector<int> arr,int n,int x);
int upper_bound(vector<int> arr,int n,int x);

int count(vector<int>& arr, int n, int k) {
    int f=lower_bound(arr,n,k);
	if(f==-1)
	return 0;
    int l=upper_bound(arr,n,k);
	return l-f+1;

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


