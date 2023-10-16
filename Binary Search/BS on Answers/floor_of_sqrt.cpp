int floorSqrt(int n)
{
    int low = 1,high = n;
    while(low<=high)
    {
        long long mid = (low+high)/2;
        long long value = mid*mid;
        if(value<=n)
        low = mid+1;
        else
        high = mid-1;
    }
    return high;
}
