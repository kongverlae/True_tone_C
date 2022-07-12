#include <stdio.h>

int main(void){
    double result;
    int input1;
    int input2;

    printf("두 정수의 값을 입력하세요 : ");
    scanf("%d %d", &input1, &input2);
    printf("%d / %d = %lf \n", input1, input2, (double)input1/(double)input2);

    return 0;
}