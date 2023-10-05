#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	for(int j = 1; j<n; j++)
	{
		if(arr[i]!=arr[j])
		{
			i++;
			arr[i]=arr[j];
		}
	}
	return i+1;
}

int main()
{
    vector<int> arr = {1,1,2,2,2,3,3,3,4};
    cout<<"Unique Elements : "<<removeDuplicates(arr,9);
    return 0;
}