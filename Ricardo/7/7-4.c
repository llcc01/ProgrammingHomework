int reverseNum(int n)
{
    int reverse_num = 0;
    while(n != 0){
        reverse_num = reverse_num * 10;
        reverse_num = reverse_num + (n % 10);
        n = n / 10;
    }
    return reverse_num;
}