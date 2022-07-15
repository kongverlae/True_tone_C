#include <stdio.h>

int main(void){
    double r;
    double pi = 3.14;
    printf("반지름을 입력하세요: ");
    scanf("%lf", &r);
    if(r<=0) printf("반지름의 넓이는 0보다 커야 함\n");
    else printf("원의 넓이는 %.2lf입니다.\n", r*r*pi);

}