#include <stdio.h>
int main()
{
    int a=3,b=4;
    printf("the value of a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d and the value of b is %d\n",a,b);
    return 0;
}
