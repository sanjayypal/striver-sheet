#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr,int target)
{
    unordered_map<int,int> mpp;
    for(int i=0; i<arr.size(); i++)
    {
        int num = arr[i];
        int moreneeded = target - num;
        if(mpp.find(moreneeded)!=mpp.end())
        { 
            cout<<"YES"<<endl;
            return {mpp[moreneeded],i};
        }
        mpp[num] = i;
    }
    cout<<"NO"<<endl;
    return {-1,-1};
}


int main()
{
    vector<int> arr = {2,6,5,8,11};
    int target = 169;
    vector<int> p = twoSum(arr,target);
    cout<<"{"<<p[0]<<","<<p[1]<<"}";
    return 0;
}