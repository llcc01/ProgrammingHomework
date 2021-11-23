int convert(int n) {
    return n==1||n==0 ?n:n%10+convert(n/10)*2;
}