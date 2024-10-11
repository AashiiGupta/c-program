#include<stdio.h>
int main (){
     
     int a, b, c;
     printf("enter the triangle sides:");
     scanf("%d %d %d",&a, &b, &c);
     int t = (a==b)+(b==c)+(c==a);


     switch (t)
     {
        case 1:
        printf("isoceleous");
        break;
        case 3:
        printf("equilateral");
        break;
          
     default:
     printf("scalar");
     }
    return 0;
}