#include <stdio.h>

int main(void){
	double r;
	double pi = 3.14;

	printf("반지름을 입력하세요: ");
	scanf("%lf",&r);

	printf("원의 넓이는 %lf입니다.\n", r*r*pi);

	return 0;
}
