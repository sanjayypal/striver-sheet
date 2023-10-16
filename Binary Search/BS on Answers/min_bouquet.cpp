#include<bits/stdc++.h>
bool possible(vector<int> arr, int days,int m,int k);
int roseGarden(vector<int> arr, int k, int m)
{
	auto it = min_element(arr.begin(),arr.end());
	int low = *it;
	int ans = arr.size();
    auto i = max_element(arr.begin(),arr.end());
	int high = *i;
	if(ans<k*m)
	return -1;
    while(low<=high)
	{
		int mid = (low+high)/2;
                if (possible(arr, mid, m, k) == true) {
                  ans = mid;
                  high = mid - 1;
                } else
                  low = mid + 1;
	}
	return low;
}


bool possible(vector<int> arr, int days,int m,int k)
{
	int cnt = 0,noofD=0;
	for(int i = 0; i<arr.size(); i++)
	{
		if(arr[i]<=days)
		 cnt++;
		else
		{
			noofD+=(cnt/k);
			cnt=0;
		}
	}
	noofD+=(cnt/k);
	return noofD>=m;
}