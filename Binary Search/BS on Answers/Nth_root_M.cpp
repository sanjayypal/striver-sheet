#include<bits/stdc++.h>
int fun(int n,int mid,int m);
int NthRoot(int n, int m) {
     int low = 1,high = m;
     while(low<=high)
     {
       int mid = (low+high)/2;
       int value = fun(n,mid,m);
       if (value == 1) {
         return mid;
       } else if (value == 0)
         low = mid + 1;
       else
       high = mid-1;
     }
     return -1;
}

int fun(int n,int mid,int m)
{
  long long ans=1;
  for (int i = 1; i <= n; i++) {
       ans = ans * mid;
       if (ans > m)
       return 2;
  }
  if(ans==m) 
     return 1;
   return 0;
}