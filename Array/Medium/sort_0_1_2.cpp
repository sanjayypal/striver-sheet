#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &arr,int n)
{
    int count0=0,count1=0,count2=0;
    for(int i = 0; i<n; i++)
    {
    if(arr[i]==0)
    count0++;
    else if(arr[i]==1)
    count1++;
    else
    count2++;
    }


    for(int i=0; i<count0; i++)
    arr[i]=0;
    for(int i=count0; i<count0+count1;i++)
    arr[i]=1;
    for(int i=count0+count1; i<n; i++)
    arr[i] = 2;
}

int main()
{
    vector<int> arr = {0,1,2,1,2,1,0,2};
    int n = 8;
    sort012(arr,n);
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}




// Optimal Sol
// void sort012(int *arr, int n)
// {
//    int low=0,mid=0,high=n-1;
//    while(mid<=high)
//    {
//      if (arr[mid] == 0) {
//        swap(arr[mid], arr[low]);
//        mid++;
//        low++;
//      }
//      else if(arr[mid]==1)
//      mid++;
//      else
//      {
//         swap(arr[mid],arr[high]);
//         high--;
//      }
//    }
// }