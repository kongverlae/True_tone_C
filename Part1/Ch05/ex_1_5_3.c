#include <stdio.h>

int main(void){
    int x=3, y=5, z=3, k=2;
    int a;

    a=x<y||x<z&&z<k;
    printf("result : %d\n", a);
    a=(x<y||x<z)&&z<k;
    printf("result : %d\n", a);

    return 0;
}