#include <stdio.h>

int main(void){
    const double POUND = 0.45;
    double weight_kg;
    double num =0;

    printf("input kg \nme : ");
    scanf("%lf", &num);

    weight_kg = num*POUND;

    printf("%.2lf pound is %.2lf kg \n",num ,weight_kg);
    
    return 0;
}