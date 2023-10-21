bool isKthBitSet(int n, int k)
{
    int mask = 1<<(k-1);
    int ans = n&mask;
    if(ans)
    return true;
    else
    return false;
}