int findXOR(int L, int R){
    int ans = 0;
    for(int i=L; i<=R; i++)
    {
        ans = ans^i;
    }
    return ans;
}



// Better Solution with Contant Time complexity

int solve(int num)
{
    if(num%4==0)return num;
    else if(num%4==1)return 1;
    else if(num%4==2)return num+1;
    else return 0;
}
int findXOR(int L, int R){
   return solve(R)^solve(L-1);
}