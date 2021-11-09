int getDays(int y,int m){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    if(m==4||m==6||m==9||m==11)return 30;
    if((y%400)==0)return 29;
    if((y%100)==0)return 28;
    if((y%4)==0)return 29;
    return 28;
}