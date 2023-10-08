#include<bits/stdc++.h>
using namespace std;
int rev_num(int num)
{
    int rev_num=0;
    while (num!=0)
    {
        rev_num=rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    cout<<endl<<" The reverse of the "<<num <<" : "<<rev_num(num);
    return 0;
}