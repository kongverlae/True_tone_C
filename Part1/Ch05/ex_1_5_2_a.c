#include <stdio.h>

int main(void){
    int a, b;
    int result1, result2;
    int set = 0;

    printf("input a, b : ");
    scanf("%d %d", &a, &b);
    printf("0=smaller, 1=bigger : ");
    scanf("%d", &set);

    if(a==b) {
        printf("these numbers are equal \n");
    }else if(a>b) {
        result1 = b;
        result2 = a;
            if(set == 0){
                printf("Smaller number : %d \n",result1);
            } else {
                printf("Bigger number : %d \n",result2);
            }
    } else {
        result1 = a;
        result2 = b;
            if(set == 0){
                printf("Smaller number : %d \n",result1);
            } else {
                printf("Bigger number : %d \n",result2);
            }
    }
    return 0;
}