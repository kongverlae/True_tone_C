#include <stdio.h>

int main(void){
    int a, b;
    printf("가로 길이를 입력하세요: ");
    scanf("%d", &a);
    printf("세로 길이를 입력하세요: ");
    scanf("%d", &b);
    
    if(a==b){
        printf("정사각형의 넓이는 %d입니다. \n", a*b);
    }else{
        printf("직사각형의 넓이는 %d입니다. \n", a*b);
    }

    return 0;
}