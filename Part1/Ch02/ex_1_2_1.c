#include <stdio.h>

int main(void){
	int num = 0;
	int i=0, j=0, k=1;
	printf("높이를 입력하세요(홀수):");
	scanf("%d",&num);
	for(i=0;i<num;i++){	
		if(i<(num/2)){
			for(j=0;j<(num/2)-i;j++){
				printf(" ");
			}
			for(j=0; j<k; j++){
				printf("*");
			}
			k+=2;
		} else {
			for(j=0;j<(i-num/2);j++){
				printf(" ");
			}
			for(j=0;j<k;j++){
				printf("*");
			}
			k-=2;
		}
		printf("\n");
	}

	return 0;
}
