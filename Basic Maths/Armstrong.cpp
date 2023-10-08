#include<bits/stdc++.h>
using namespace std;
bool Armstrong(int num)
{
    int temp = num;
	int count = to_string(num).length();

   int arm_num=0;
   for(int i=0; i<count; i++)
   {
       int modulus = num%10;
	   arm_num=arm_num+pow(modulus,count);
	   num=num/10;
   }
   if(arm_num==temp)
   return true;
   else
   return false;
}

int main()
{
    int num;
    cout<<"Enter any number here"<<endl;
    cin>>num;
    if(Armstrong(num))
    cout<<"An Armstrong Number";
    else
    cout<<"Not an Armstrong Number";
    return 0;
}