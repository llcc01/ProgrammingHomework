/*设计函数int judgeTriangle(int a,int b,int c)，判断a、b、c三边是否能构成三角形，
如果能，那么进一步判断是属于哪种三角形（等边、等腰、直角、不规则三角形） 
这里的a、b、c没有顺序之分。 当a、b、c三边不能构成三角形时，返回-1；
当a、b、c三边构成不规则三角形时，返回0；当a、b、c三边构成直角三角形时，返回1；
当a、b、c三边构成等腰三角形时，返回2；当a、b、c三边构成等边三角形时，返回3*/ 
#include<stdio.h>

int judgeTriangle(int x,int y,int z) ; 

int main()
{
    int a,b,c;    

    scanf("%d%d%d",&a,&b,&c);

    switch(judgeTriangle(a,b,c))
    {
        case    -1    :    printf("It is not a triangle.\n") ;    break ;
        case    0    :    printf("It is a scalenous triangle.\n") ;    break ;
        case    1    :    printf("It is a right-angled triangle.\n") ;    break ;
        case    2    :    printf("It is an isosceles triangle.\n") ;    break ;
        case    3    :    printf("It is a equilateral triangle.\n") ;    break ;
    }

    return 0;
}
int judgeTriangle(int x,int y,int z)
{
	int ans;
	
	if (x == y && y == z)
		ans = 3;
	else if (x == y || y == z || x == z)
		ans = 2;
	else if ((x*x+y*y == z*z) || (x*x+z*z== y*y) || (y*y+z*z == x*x))
		ans = 1;
	else if (x+y <= z || x+z <= y || y+z <= x)
		ans = -1;
	else
		ans = 0;
	return ans;
}
