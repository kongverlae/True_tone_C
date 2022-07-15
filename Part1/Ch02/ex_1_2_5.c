#include <stdio.h>

int main(void){
    int a, b;
    char c;

    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("연산을 입력하세요 + or * : ");
    scanf(" %c", &c);

    if(c=='+'){
        printf("%d + %d = %d\n", a, b, a+b);
    }else if(c=='*'){
        printf("%d * %d = %d\n", a, b, a*b);
    }else {
        printf("error +나 *를 입력하세요.\n");
    }

    return 0;
}