int getDigit(long long n) {
    int tot=0;
    while(n){n/=10;tot++;}
    return tot;
}