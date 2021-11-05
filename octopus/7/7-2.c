int getDays(int year,int month){
    int a[7]= {1,3,5,7,8,10,12},b[4]={4,6,9,11};
    for (int i = 0; i < 7; ++i) {
        if(month == a[i])return 31;
    }
    for (int i = 0; i < 4; ++i) {
        if(month == b[i])return 30;
    }
    if(year%400==0)return 29;
    if(year%100==0)return 28;
    if(year%400==0)return 29;
    if(year%4==0)return 29;
    return 28;
}