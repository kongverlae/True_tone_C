#include <stdio.h>
int bunny(int n);
int num1=1, num2=1;

int main(void){
    int result;
    int i = 0;
    for( i = 0; i < 12 ; i++){
        result = bunny(i);
        printf("%d month result : %d\n", i+1, result);
    }
    return 0;
}

int bunny(int n){
    int temp;
    if(n==0 || n == 1){
        return 1;
    } else{
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        return temp;
    }
    
}