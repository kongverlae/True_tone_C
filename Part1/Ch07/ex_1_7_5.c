#include <stdio.h>

int main(void){
    int num;
    int i=1;
    int result = 1;

    printf("factorial?\n me : ");
    scanf("%d", &num);

    while (i <= num) {
        result = result*i;

        i++;
    }
    
    printf("result : %d \n", result);

    return 0;
}