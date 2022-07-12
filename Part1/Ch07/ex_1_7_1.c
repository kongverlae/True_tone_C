#include <stdio.h>

int main(void){
    int num;
    int i =1;
    int count = 0;

    printf("input num value : ");
    scanf("%d", &num);

    while (i<=100) {
        if (0 == i%num) {
            printf("output num value : %d \n",i);
            count++;
        }
        i++;
    }
    printf("number of multiple %d is %d \n",num, count);

    return 0;
}