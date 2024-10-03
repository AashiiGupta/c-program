#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides of triangle:");
    scanf("%d %d %d",&a, &b, &c);
    if (a==b && b==c && c==a)
    {
        printf("equilateral triangle");
    }
    else if (a==b || b==c || c==a)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalar triangle");
    }
    
    return 0;
}
