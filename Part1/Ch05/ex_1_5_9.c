#include <stdio.h>

int main(void){
    const double Pound = 0.45;
    double weight_kg;

    weight_kg = 150*Pound;

    printf("150 pound is %.2lf kg \n",weight_kg);
    
}