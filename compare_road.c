#include <stdio.h>
int main()
{
    int road1 = 12;
    int road2 = 15;
    int road3 = 10;
    int path;
    printf("Road 2 distance is 15 which is largest road\n");
    printf("Road 1 distance is 12 which had moderate distance\n");
    printf("Road 3 distance is 10 which has least distance\n");
    printf("enter the road number to choose the path:");
    scanf("%d", &path);
    if (1 == path)
    {
        printf("you selected moderate distance road");
    }
    else if (2 == path)
    {
        printf("you selected largest distance road");
    }
    else
    {
        printf("you selected least distance road");
    }

    return 0;
}