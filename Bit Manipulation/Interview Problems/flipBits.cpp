int flipBits(int A, int B){
    int count=0;
    int num = A^B;
    while(num>0){
        int mask = 1;
        if(num&mask)
        count++;
        num=num>>1;
    }
    return count;
}