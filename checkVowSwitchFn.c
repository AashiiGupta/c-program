#include <stdio.h>
void checkVow(char);
int main()
{
    char ch;
    printf("enter character:");
    scanf(" %c", &ch);
    checkVow(ch);
    return 0;
}

void checkVow(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel");
        break;

    default:
        printf("consonant");
    }
}