#include<stdio.h>
int main(){
	int a[2][3],i,j,b[2][3];
printf("enter 6 elements:");
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
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
