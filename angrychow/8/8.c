void reverse(int n) {
    printf("%d",n%10);
    if(n>9)reverse(n/10);
}