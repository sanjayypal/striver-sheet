#include<bits/stdc++.h>
int Student(vector<int> arr,int pages)
{
    int Stu=1,pagesStu=0;
   for(int i=0; i<arr.size(); i++)
   {
       if(pagesStu+arr[i]<=pages)
       pagesStu+=arr[i];
       else
       {
           Stu+=1;
           pagesStu=arr[i];
       }
   }
   return Stu;
}
int findPages(vector<int>& arr, int n, int m) {
    if(n<m)
    return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high)
    {
        int mid = (low+high)/2;
        int cntStu = Student(arr,mid);
        if(cntStu>m)
           low = mid+1;
        else
        high = mid-1;
    }
    return low;
}