int countBinary(int n) {
    return n<=1?1:countBinary(n>>1)+1;
}