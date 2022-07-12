#include <stdio.h>

int main(void){
    int result;
    int a, b, c;
    printf("input a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b) {result = a;
    } else result = b;
    if(c>result) result = c;

    printf("biggest number is %d \n", result);

    return 0;
}