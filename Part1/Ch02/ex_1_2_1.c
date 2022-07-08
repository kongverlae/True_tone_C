#include <stdio.h>

int main(void){
	int num = 0;
	int i=0, j=0;
	printf("높이를 입력하세요(홀수):");
	scanf("%d",&num);
	num = num/2;
	for(i=1;i<=num;i++){	//위 삼각형
		for(j=0;j<=(num-i)+1;j++){
			printf(" ");
		}
		for(j=1;j<=((i*2)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=num;i++){	//아래 삼각형 출력
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(j=0;j<=(((num-i)*2));j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
