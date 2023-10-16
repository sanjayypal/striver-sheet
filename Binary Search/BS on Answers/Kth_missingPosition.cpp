int missingK(vector < int > vec, int n, int k) {
    for(int i=0; i<n; i++)
    {
        if(vec[i]<=k)
        k++;
        else
        break;
    }
    return k;
}



// Ailter
// int missingK(vector < int > vec, int n, int k) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int missing = vec[mid] - (mid + 1);
//         if (missing < k) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return k + high + 1;
// }