#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	int count=0,el;
	for(int i = 0; i<v.size();i++)
	{
		if(count==0)
		{
			count++;
			el = v[i];
		}
		else if (el == v[i])
		count++;
		else
		count--;
	}
    return el;
}

int main()
{
    vector<int> arr = {2,2,1,3,1,1,3,1,1};
    cout<<majorityElement(arr);
    return 0;
}