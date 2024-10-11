#include <stdio.h>
int main()
{

   int n;
   printf("enter the number of sides(3 or 4 or 5):");
   scanf("%d", &n);

   switch (n)
   {
   case 3:

      printf("triangle");
      break;
      case 4:

      printf("quadrilateral");
      break;
      case 5:

      printf("pentagon");
      break;

   default:
      printf("invalid input");
   }
   return 0;
}