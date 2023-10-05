#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    for(int i = 0; i<n-1; i++)
    {
        swap(arr[i],arr[i+1]);
    }
    return arr;
}

// method 2
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i = 0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    return arr;
}

