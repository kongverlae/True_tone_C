#include <stdio.h>

int main(void) {
    int num ;
    int i = 0;

    printf("num값을 입력하세요 : ");
    scanf("%d", &num);
    
    while (i<10) {
        printf("%d * %d = %d \n",num, i, num*i);
        i++;
    }
    
    return 0;
}