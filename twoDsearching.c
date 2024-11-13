// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[2][3],element,i,j;
    printf("enter 6 numbers:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the element:");
    scanf("%d",&element);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(element == a[i][j]){
                printf("a[%d][%d]",i,j);
            }
        }
    }

    return 0;
}
