int judgeTriangle(int a,int b,int c){
    if(a+b<=c||a+c<=b||b+c<=a)return -1;
    if(a==b&&b==c)return 3;
    if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)return 1;
    if(a==b||b==c||a==c)return 2;
    return 0;
}