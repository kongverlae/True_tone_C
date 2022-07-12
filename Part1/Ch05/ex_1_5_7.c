#include <stdio.h>

int main(void){
    int bin;
    int deci;
    printf("8자리 이하 2진수를 입력하세요 : ");
    scanf("%d", &bin);
    
    deci = ((bin%100000000)/10000000)*128 +
    ((bin%10000000)/1000000)*64 +
    ((bin%1000000)/100000)*32 +
    ((bin%100000)/10000)*16 +
    ((bin%10000)/1000)*8 +
    ((bin%1000)/100)*4 +
    ((bin%100)/10)*2 +
    ((bin%10)/1)*1 ;
    
    printf("%d은 %d이다.\n", bin, deci);

    return 0;
}