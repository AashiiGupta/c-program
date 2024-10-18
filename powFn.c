#include <stdio.h>
 
int numPow(int,int);
int main(){
    int num, power;
    printf("Enter a number and power: ");
    scanf("%d %d",&num,&power);
    printf("result is : %d",numPow(num,power));

    return 0;
}
int numPow(int n,int power){
    int ans =1;
    for (int i = 1; i <= power; i++)
    {
        ans*=n;
    }
    return ans;   
}