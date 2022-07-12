#include <stdio.h>

int main(void){
    int num;
    printf("input number : ");
    scanf("%d", &num);
    switch(num){
        case 90 ... 100 : printf("A!!\n"); break;
        case 80 ... 89 : printf("B!!\n"); break;
        default : if(num>100) {
            printf("Error!!\n"); break;
        }else printf("F!!\n"); break;
    }

    return 0;
}