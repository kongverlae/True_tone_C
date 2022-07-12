#include <stdio.h>

int main(void){
    int num;
    int a, b, c;
    
    printf("input third grade number : ");
    scanf("%d", &num);
    a = num/100;
    b = num/10;
    c = num/1;

    if(a%2 == 1) {
        printf("odd\n");
    } else {
        printf("even\n");
    }
    if(b%2 == 1) {
        printf("odd\n");
    } else {
        printf("even\n");
    }
    if(c%2 == 1) {
        printf("odd\n");
    } else {
        printf("even\n");
    }

    return 0;
}