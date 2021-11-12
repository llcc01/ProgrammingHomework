int getDigit(long long n)
{
    int digit_num = 0;
    while(n != 0){
        n = n / 10;
        digit_num++;
    }
    return digit_num;
}