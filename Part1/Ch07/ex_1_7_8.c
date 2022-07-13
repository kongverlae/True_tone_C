#include <stdio.h>

int main(void) {
    int count = 0;
    int result = 0;
    int num = 0;
    while (1) {
        printf("input your score : ");
        scanf("%d", &num);
        if(num==0) break;
        result += num;
        count++;
        //printf("num : %d, result : %d, count : %d \n", num, result, count);
    }
    printf("result : %d, count : %d \n", result, count);

    return 0;
}
