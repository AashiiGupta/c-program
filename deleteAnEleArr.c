#include <stdio.h>
int main()
{
    int a[5];
    printf("enter 5 numbers:");
    for(int i =0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position which you want to delete:");
    int key;
    scanf("%d",&key);
    for(int i=0;i<5;i++){
        if(i+1==key){
            a[i]=a[i+1];
            for(int j=i+1;j<5;j++){
                a[j]=a[j+1];
            }
            break;
        }
    }
    printf("\nafter deletion the array elements are:-");
    for(int i=0;i<4;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}