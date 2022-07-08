#include <stdio.h>

int main(void){
    int i=0;
    int num1=0, num2=0;
    while (1) {
        printf("종료하려면 Ctrl + c\n");
        printf("x y를 입력하세요 : ");
        scanf("%d %d",&num1, &num2);
        for (i=1; i<=num2; i++) {
            printf("%d * %d = %d\n", num1, i, num1*i);
        }
        printf("\n--------------------\n\n");
    }
    return 0;  
}