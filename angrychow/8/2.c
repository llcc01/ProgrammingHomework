int getSum(int n,int a) {
    return n == 0 ? a : a + 3*n + getSum(n-1 , a) ;
}