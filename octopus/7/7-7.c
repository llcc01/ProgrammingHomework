int isPerfect(int n){
    if(n==1) return 0;
    for (int i = 2,sum = 1; i <n/2+2 ; ++i) {
        if(n%i==0)sum+=i;
    }
    return sum==n;
}
void printPerfact(int n){
    printf("%d=1",n);
    for (int i = 2; i <n/2+2 ; ++i) {
        if(n%i==0)printf("+%d",i);
    }
    printf("\n");
}