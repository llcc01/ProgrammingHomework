int reverseNum(int n){
    int ret=0;
    while(n){ret*=10;ret+=n%10;n/=10;}
    return ret;
}