#include <stdio.h>

int main(void){
    int num;
    for(num = 0; num<=100; num++){
        if(num%2==0) continue;
        printf("odd number : %d\n",num);
    }

    return 0;
}