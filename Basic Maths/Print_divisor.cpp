// #include<bits/stdc++.h>
// using namespace std;

// APPROACH 1;
// vector<int> printdivisors(int num)
// {
//     vector<int> ans;
//     for (int i = 1; i <= num; i++)
//     {
//         if(num%i==0)
//         {
//         cout<<i<<" ";
//         ans.emplace_back(i);
//         }
//     }
//     return ans;
// }


// APPROACH 2
// vector<int> printdivisor(int num)
// {
//     vector<int> ans;
//     for (int i = 1; i <=sqrt(num) ; i++)
//     {
//         if(num%i==0)
//         {
//            ans.push_back(i); 
//            if(num/i!=i)
//            {
//            ans.push_back(num/i);
//            }
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }




// int main()
// {
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     printdivisor(num);
//    return 0;
// }