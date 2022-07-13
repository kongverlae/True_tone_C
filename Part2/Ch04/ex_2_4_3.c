#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    int* array[2] = {&a, &b};
    printf("&a : %x, &b : %x\n",&a, &b);
    printf("array[0] : %x, array[1] : %x\n", array[0], array[1]);
    printf("*&a : %d, *&b : %d\n",*&a, *&b);
    printf("*array[0] : %d, *array[1] : %d\n", *array[0], *array[1]);
    
    return 0;
}