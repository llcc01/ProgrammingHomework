void collatz(int n){
    printf(n==1?"%d\n":"%d ",n);
    if(n==1)return;
    n%2==1 ? collatz(3*n+1) : collatz(n>>1);
}