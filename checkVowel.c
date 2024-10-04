#include <stdio.h>
int main()
{
    char c;
    printf("enter char:");
    scanf("%c",&c);
    if ((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            printf("vowel");
        }
        else
        {
            printf("consonant");
        }
        
    }
    
    return 0;
}
