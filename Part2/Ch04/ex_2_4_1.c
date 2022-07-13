#include <stdio.h>

int main(void){
    int array[5] = {10, 20, 30, 40, 50};
    int i=0;
    int result = 0;
    int* pa = NULL;

    pa = array;

    for(i=0;i<5;i++){
        result += *(pa+i);
    }
    printf("result : %d\n", result);

    return 0;
}