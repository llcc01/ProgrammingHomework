#include <stdio.h>
int score[100];
int main()
{
    
    double avg;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    for(i=0;i<n;i++)
    {
        avg += score[i];
    }
    avg /= n;
    printf("%.2lf",avg);
    return 0;
}