#include <stdio.h>

int main(void){
    int ascii_num;

    printf("input number : ");
    scanf("%d", &ascii_num);

    printf("%c is number of ascii code %d\n", ascii_num, ascii_num);

    return 0;
}