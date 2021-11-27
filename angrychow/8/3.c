int findMax(int n) {
    int in;
    scanf("%d",&in);
    if(n==1) {
        return in;
    } else {
        int Max = findMax(n-1);
        return in>Max ?in:Max;
    }
}