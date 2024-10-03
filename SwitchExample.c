#include <stdio.h>
int main()
{
	char c;
	printf("Enter the char (E,V,G,A,F)");
	scanf("%c", &c);
	switch (c)
	{
	case 'E':
		printf("Excellent");
		break;

	case 'V':
		printf("Very good");
		break;
	case 'G':
		printf("good");
		break;
	case 'A':
		printf("Average");
		break;
	case 'F':
		printf("Fail");
		break;
	default:
		printf("Your input is not match");
		break;
	}
	return 0;
}
