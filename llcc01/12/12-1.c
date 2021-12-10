#include <stdio.h>
int main()
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(')
        {
            count++;
        }
        else if (ch == ')')
        {
            count--;
            if (count < 0)
            {
                break;
            }
        }
    }
    printf(count?"parentheses do not match!\n":"parentheses match!\n");
}