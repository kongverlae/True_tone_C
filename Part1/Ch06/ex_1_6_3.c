#include <stdio.h>

int main(void){

    int i; 
    float f;
    double d;

    i = (long)('a' + 1.3);
    f = 2.49+i;
    d = (double)f*i;

    printf("i : %d f : %lf d : %lf \n", i, f, d);

    return 0;
}