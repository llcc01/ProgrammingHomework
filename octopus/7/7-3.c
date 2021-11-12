int getDigit(long long n){
    int k=0;
    while(n>0){
        k++;n/=10;
    }
    return k;
}