#include <stdio.h>

int main(void){
    int a, b;
    int result;

    printf("input a : ");
    scanf("%d", &a);
    printf("input b : ");
    scanf("%d", &b);

    if(a==b) {
        printf("these numbers are equal \n");
    }else if(a>b) {
        result = b;
        printf("smaller number : %d \n",result);
    }else {
        result = a;
        printf("smaller number : %d \n",result);
    }


    return 0;
}