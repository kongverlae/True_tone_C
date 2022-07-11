#include <stdio.h>

int main(void){
    int x, y, z;
    printf("input x : ");
    scanf("%d", &x);
    printf("input y : ");
    scanf("%d", &y);
    printf("input z : ");
    scanf("%d", &z);

    printf("(x+y)*(x+z)/(y%%z) = %d \n",(x+y)*(x+z)/(y%z));

    return 0;
}