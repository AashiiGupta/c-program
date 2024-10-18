#include <stdio.h>
void checkVowel(char);
int main()
{
    char c;
    printf("enter char:");
    scanf("%c", &c);
    checkVowel(c);
    return 0;
}

void checkVowel(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf("vowel");
        }
        else
        {
            printf("consonant");
        }
    }
}