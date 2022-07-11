#include <stdio.h>

int main(void){
    int a, b, c;
    int result;

    printf("3개의 정수 입력 : ");
    scanf("%d %d %d", &a, &b, &c);

    result = a>b ? a:b;
    result = result>c ? result:c;

    printf("lagest number : %d\n", result);    


    return 0;
}