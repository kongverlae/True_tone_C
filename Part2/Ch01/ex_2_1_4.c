#include <stdio.h>

int main(void){
    int mul[9] = {};
    int num;
    printf("input num : ");
    scanf("%d", &num);

    for(int i = 0; i < 9; i++){
        mul[i] = num*(i+1);
        printf("%d ",mul[i]);
    }
        printf("\n");

    return 0;
}