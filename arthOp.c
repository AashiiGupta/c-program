#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter two no.");
    scanf("%d%d", &num1, &num2);
    char c;
    printf("enter the operator:");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    default:
        break;
    }
    return 0;
}
