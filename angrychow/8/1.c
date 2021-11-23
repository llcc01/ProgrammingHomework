int fuc(int n) {
    return n == 0 ? 0 : fuc(n-1)+(n*n*n) ;
}