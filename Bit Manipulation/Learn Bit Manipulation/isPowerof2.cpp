bool isPowerOfTwo(int n)
{	
    int ans = n&(n-1);
    if(ans==0)
    return true;
    else
    return false;
}