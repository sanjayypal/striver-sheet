#include<bits/stdc++.h>
using namespace std;
int largest_element(vector<int> &arr)
{
    int max = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        if(max<arr[i])
        max = arr[i];
    }
    return max;
}

int main()
{
    vector<int> arr = {2,3,1,55,22,66,22};
    cout<<"the max element : "<<largest_element(arr);
    return 0;
}