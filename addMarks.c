#include <stdio.h>
int main()
{
    int roll,marks;
    char name[20];
    int total=0,arr[3];
    float per;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter roll:");
    scanf("%d",&roll);
    printf("enter 3 subject marks:");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&marks);
        arr[i]=marks;
        total+=arr[i];
    }
    per = total/3;
    printf("total marks of %s is %d and roll no. is %d\n",name,total,roll);
    printf("percentage is %f",per);
    return 0;
}
