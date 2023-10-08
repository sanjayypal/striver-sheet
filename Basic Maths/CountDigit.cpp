#include<bits/stdc++.h>
using namespace std;
int CountUsingStr(int );
int CountdigitLoop(int);
int Count_digits3(int);
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<" Counting Digit Using Loop : "<<CountdigitLoop(num)<<endl;
    cout<<" Counting Using String "<<num<< " is  : "<<CountUsingStr(num)<<endl;
    cout<<" Counting Using log10 and floor function "<<num<< " is  : "<<Count_digits3(num);
    return 0;
}
int CountdigitLoop(int num)
{
    int count=0;
      while(num!=0)
    { 
        num=num/10;
        count++;
    }
  return count;
}

int CountUsingStr(int num)
{
     string x=to_string(num);
     return x.length();

}

int Count_digits3(int num)
{
    int x=floor(log10(num)+1);
    return x;
}