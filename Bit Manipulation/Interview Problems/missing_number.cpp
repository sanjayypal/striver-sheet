int missingNumber(int n, vector<int> &arr){
    int num = arr[0];
    for(int i=1; i<n; i++)
    num = num^arr[i];
    return num;
}