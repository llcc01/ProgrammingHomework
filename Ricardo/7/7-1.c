int fun( int x )
{
    int y;
    if(x < 1){
        y = x;
    }else if( x >= 1 && x <= 10){
        y = 2 * x - 1;
    }else if( x > 10 && x <= 100){
        y = 3 * x - 11;
    }else{
        y = x * x - 24; 
    }
    return y;
}
