#include <stdio.h>

int main(void){
    int x=3, y=5, z=3, k=2;
    int a;
    printf("input x, y, z, k : ");
    scanf("%d %d %d %d",&x, &y, &z, &k);

    a=x<y||x<z&&z<k;
    printf("x<y||x<z&&z<k = %d\n", a);
    a=(x<y||x<z)&&z<k;
    printf("(x<y||x<z)&&z<k = %d\n", a);

    return 0;
}