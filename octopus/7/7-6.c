int judgeTriangle(int a, int b, int c) {
    int maxn = (maxn = a > b ? a : b) > c ? maxn : c;
    if(2*maxn>=a+b+c)return -1;
    if(2*maxn*maxn==a*a+b*b+c*c)return 1;
    if(a==b&&b==c)return 3;
    if(a==b||b==c||c==a)return 2;
    return 0;
}