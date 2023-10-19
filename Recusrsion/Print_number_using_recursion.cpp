#include<bits/stdc++.h>
using namespace std;

vector<int> print_number(int n)
{
    vector<int> x;
    if(n==0)
    {
        return x;
    }
    else
    return print_number(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<print_number(n);
    return 0;
}
