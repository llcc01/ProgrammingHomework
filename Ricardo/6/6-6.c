#include <stdio.h>
#include <math.h>

double factorial(int num)
{
    double result = 1;
    while(num != 1){
        result = result * num;
        num = num - 1;
    }
    return result;
}

int main(void)
{
    double exponent;
    double result = 1;
    scanf("%lf", &exponent);
    for(int i = 1; ;i++){
        double power_number = 1;
        for(int j = 0; j < i; j++){
            power_number = power_number * exponent;
        }
        double middle = power_number / factorial(i);
        printf("%.10lf\n", middle);
        if(fabs(middle) < 1e-8){
            break;
        }
        result = result + middle;
    }
    printf("%.4lf\n", result);
    return 0;
}