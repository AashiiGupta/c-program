#include <stdio.h>
int main()
{
    int a,b,c;
     printf("enter 3 angle of triangle:");
     scanf("%d%d%d",&a,&b,&c);
     if ((a+b+c)==180)
     {
        printf("valid triangle");
     }
     else
     {
        printf("not valid triangle");
     }
    return 0;
}
