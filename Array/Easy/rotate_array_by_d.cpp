#include<bits/stdc++.h>
vector<int> rotateArray(vector<int>arr, int d) {
    int n = arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);
    return arr;
}




vector<int> rotateArray(vector<int>a, int k) {
    vector<int> arr;
    int n = a.size();
    k = k%n;
    for(int i=0; i<k; i++)
    arr.push_back(a[i]);
    for(int i = k; i<n; i++)
    a[i-k] = a[i];
    for(int i=n-k; i<n; i++)
    a[i] = arr[i-(n-k)];
    return a;
}
