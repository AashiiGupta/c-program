#include <stdio.h>
int main()
{

   int day,month,year;
   printf("enter day month and year:");
   scanf("%d %d %d",&day,&month,&year);
   if ((month==1) || (month==2))
   {
      month+=12;
      year--;
   }
   int k = year%100;
   int j = year / 100;

   int f;
   f= (day+((13*(month+1))/5)+k+(k/4)+(j/4)+(5*j))%7;
   switch (f)
   {
   case 0:
   printf("saturday");
      break;
      case 1:
   printf("sunday");
      break;
      case 2:
   printf("monday");
      break;
      case 3:
   printf("tuesday");
      break;
      case 4:
   printf("wednesday");
      break;
      case 5:
   printf("thursday");
      break;
      case 6:
   printf("friday");
      break;
   }
   
   return 0;
}

//find the day of the week for a given date using switch case. user input day month and year. calc the day of the week