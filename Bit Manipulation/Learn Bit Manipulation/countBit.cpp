#include<bits/stdc++.h>
using namespace std;
int countSetBits(int N)
{
    int count=0;
    for(int i=1; i<=N; i++)
    {
        int n = i;
        while(n!=0)
        {
            int lastBit = n&1;
            if(lastBit)
            count++;
            n = n>>1;
        }
    }
    return count;
}

int countSetBitsFast(int N)
{
    int count=0;
    for(int i=1; i<=N; i++)
    {
        int n = i;
        while(n!=0)
        {
            n = (n&(n-1));
            count++;
        }
    }
    return count;
}

int main()
{
    int num = 5;
    cout<<countSetBitsFast(num);
    return 0;
}