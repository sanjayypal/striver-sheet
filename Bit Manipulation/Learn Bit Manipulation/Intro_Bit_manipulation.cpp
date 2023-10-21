#include<bits/stdc++.h>
int getithBit(int &num,int i)
{
    int mask = 1<<(i-1);
    if(num&mask)
    return 1;
    return 0;
}

int setIthBit(int &num,int i)
{
    int mask = 1<<(i-1);
    num = num|mask;
    return num;
}

int clearIthBit(int &num,int i)
{
    int mask = ~(1<<(i-1));
    num = num&mask;
    return num;
}


vector<int> bitManipulation(int num, int i){
    vector<int> ans;
    ans.push_back(getithBit(num,i));
    ans.push_back(setIthBit(num,i));
    ans.push_back(clearIthBit(num,i));
    return ans;
}