#include <stdio.h>
#include <math.h>
int main()
{
    int t,r,p;
    printf("enter p,r and t");
    scanf("%d %d %d",&p,&r,&t);
    float amt,ci;
    amt = p * pow(((1+r)/100),t);
    ci =  amt - p;
    printf("compund interest is %f",ci);
    return 0;
}
