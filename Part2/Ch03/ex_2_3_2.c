#include <stdio.h>

int main(void){
    int a = 10;
    int b = 20;
    int temp = 0;
    int* p1 = NULL;
    int* p2 = NULL;

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("a : %d, b : %d\n",a, b);

    return 0;
}