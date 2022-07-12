#include <stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main(void){
    int a, b;
    int result;
    double result2;

    printf("input number a, b : ");
    scanf("%d %d", &a, &b);

    result = plus(a,b);
    printf("a + b = %d\n",result);
    
    result = minus(a,b);
    printf("a - b = %d\n",result);
    
    result = multiply(a,b);
    printf("a * b = %d\n",result);
    
    result2 = divide(a,b);
    printf("a / b = %lf\n",result2);

    return 0;
}

int plus(int a, int b){
    return a+b;
}
int minus(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
double divide(int a, int b){
    if (b!=0) {
        return (double)a/(double)b;
    } else return 0;
}