#include <stdio.h>
#include <string.h>
int main(){
	char originalPass[]="123#hg";
	char password[10];
	printf("enter password: ");
	scanf("%s", password);
	int i=0;
	while(i<=5){
		if(strcmp(originalPass,password) == 0) {
            printf("correct password!\n");
			break;
        }else{
			printf("incorrect password!\n");
			printf("enter again!\n");
			scanf("%s", password);
		}
        i++;
	}

	if(i==6){
		printf("maximum attempts reached.\nAccount locked!\nAnd your mobile is reset now.\n");
	}

	return 0;
}
	