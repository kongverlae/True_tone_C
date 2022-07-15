#include <stdio.h>

int main(void){
    int x, y, z;
    int count=0;
    while(1){
        printf("input x : ");
        scanf("%d", &x);
        printf("input y : ");
        scanf("%d", &y);
        printf("input z : ");
        scanf("%d", &z);

        printf("(x+y)*(x+z)/(y%%z) = %d \n",(x+y)*(x+z)/(y%z));
        count++;
        printf("count : %d\n",count);
        printf("Ctrl + c to exit ... \n");
    }
    return 0;
}