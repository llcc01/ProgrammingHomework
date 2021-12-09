#include <stdio.h>

int money[7] = {100, 50, 20, 10, 5, 2, 1};

void pay_the_salary(int num, int i)
{
    if(num != 0){
        if(i == 6){
        printf("%d:%d\n", money[6], num);
        }else{
        if(num / money[i] != 0){
            printf("%d:%d\n", money[i], num / money[i]);
        }
        pay_the_salary(num % money[i], i + 1);
        }
    }
}

int main(void)
{
    int salary;
    scanf("%d", &salary);
    int i = 0;
    while(salary / money[i] == 0){
        i++;
    }
    pay_the_salary(salary, i);
    return 0;
}