#include <stdio.h>

int main(void){
    int a, b;
    
    printf("input integer a, b : ");
    scanf("%d %d", &a, &b);

    if(a==b){
        printf("those two number is same! \n");
    } else if(a>b){
        printf("%d is bigger number! \n", a);
    } else {
        printf("%d is bigger number! \n", b);
    }

    return 0;
}