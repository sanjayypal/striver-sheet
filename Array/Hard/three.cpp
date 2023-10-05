#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplets(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> st;
    for(int i = 0; i < n; i++)
    {
        set<int> hashset;
        for(int j = 0; j<n ; j++)
        {
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third)!=hashset.end())
            {
                vector<int> temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = triplets(arr);
    for(auto it: ans)
    {
    cout<<"[ ";
    for(auto i:it)
    cout<<i<<" ";
    cout<<"]"<<endl;
    }
    return 0;
}