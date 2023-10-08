// #include <bits/stdc++.h>
// using namespace std;
// int GCD(int a, int b)
// {

    // int i = 2, gcd = 1;
    // if (a < b)
    // {
    //     while (i <= a)
    //     {
    //         if (a % i == 0 && b % i == 0)
    //             gcd = i;
    //         i++;
    //     }
    //     return gcd;
    // }
    // else
    // {
    //     while (i <= b)
    //     {
    //         if (a % i == 0 && b % i == 0)
    //             gcd = i;
    //         i++;
    //     }
    //     return gcd;
    // }
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers a and b respectively : ";
//     cin >> a >> b;
//     cout << "The GCD of " << a << " and " << b << " is " << GCD(a, b);
//     return 0;
// }






// Alternative Method using Recursion


#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

int main()
{
    int a=36,b=90;
    cout<<"The gcd of a and b is : "<<gcd(a,b);
    return 0;
}