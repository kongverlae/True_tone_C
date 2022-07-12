#include <stdio.h>

int main(void) {
    int count = 0;
    int result;
    int num;
    while (1) {
        printf("input your score : ");
        scanf("%d", &num);
        if(num==0) break;
        result += num;
        count++;
    }
    printf("result : %d, count : %d \n", result, count);

    return 0;
}
