#include <stdio.h>
int main()
{

   int n;
   printf("enter the num:");
   scanf("%d", &n);

   switch (n % 2)
   {
   case 0:

      printf("even");
      break;

   default:
      printf("odd");
   }
   return 0;
}