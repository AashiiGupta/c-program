#include <stdio.h>
int findSmall(int,int,int);
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("smallest is: %d",findSmall(n1,n2,n3));
    return 0;
    }

    int findSmall(int n1, int n2, int n3){
        int smallNum = (n1<n2)?n1:((n2<n3)?n2:n3);
        return smallNum;
    }
        