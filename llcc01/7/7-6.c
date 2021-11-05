#include <stdio.h>

int judgeTriangle(int, int, int);

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    switch (judgeTriangle(a, b, c))
    {
    case -1:
        printf("It is not a triangle.\n");
        break;
    case 0:
        printf("It is a scalenous triangle.\n");
        break;
    case 1:
        printf("It is a right-angled triangle.\n");
        break;
    case 2:
        printf("It is an isosceles triangle.\n");
        break;
    case 3:
        printf("It is a equilateral triangle.\n");
        break;
    }

    return 0;
}

/* 请在这里填写答案 */
int judgeTriangle(int a, int b, int c)
{
    //将abc从小到大排序
    int t, type = -1;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a + b > c) //如果是三角形
    {
        type = 0;
        if (a * a + b * b == c * c) //直角三角形
        {
            type = 1;
        }
        else if (a == b || b == c) //等腰三角形，等腰三角形的情况自己看着办:)
        {
            type = 2;
            if (a == c) //等边三角形
            {
                type = 3;
            }
        }
    }
    return type;
}