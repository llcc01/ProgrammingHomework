#include <stdio.h>

void printFactor(int a, int b);

int main(void)
{
    int a, b ,i;
    scanf("%d%d", &a, &b);
    for(i = a; i <= b; i++){
        printFactor(i ,1);
    }
    return 0;
}

int isPrime(int num)
{
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void printFactor(int a, int b){
    if(b == 1){
        printf("%d=", a);
        b = b + 1;
    }
    if(a == b){
        printf("%d\n", b);
    }else{
        if(a % b == 0){
            printf("%d*", b);
            printFactor(a / b, b);
        }else{
            while (a % b != 0 || isPrime(b) == 0)
            {
                b++;
            }
            printFactor(a, b);
        }
    }
}

