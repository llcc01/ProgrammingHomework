int mypow(int x, int y)
{
    int result_num = 1;
    for(int i = 0; i < y; i++){
        result_num = result_num * x;
    }
    return result_num;
}