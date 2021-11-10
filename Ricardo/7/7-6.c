int judgeTriangle(int a, int b, int c)
{
    int result;
    if(a + b <= c || b + c <= a|| a + c <= b){
        result = -1;
    }else{
        if(a == b && b == c && a == c){
            result = 3;
        }else if(a == b || b == c || a == c){
            result = 2;
        }else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
            result = 1;
        }else{
            result = 0;
        }
    }
    return result;
}