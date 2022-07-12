#include <stdio.h>

int abs(int n){
    if (n < 0) {
        return ~n +1;
    } else return n;
}

int main(void){
    int num;
    printf("input number : ");
    scanf("%d",&num);
    num = abs(num);
    printf("abs of nuber is : %d \n",num);

    return 0;
}

