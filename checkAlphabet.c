#include <stdio.h>
int main()
{
    char c;
    printf("Enter char:");
    scanf("%c",&c);
    if ((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        printf("%c is alphabet",c);
    }
    else
    {
        printf("%c is not a alphabet",c);
    }
    
    return 0;
}