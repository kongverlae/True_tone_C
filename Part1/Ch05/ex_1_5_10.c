#include <stdio.h>

int main(void){

    const double Feet = 30.48;
    double height_m;

    height_m = (15000*Feet)/100;

    printf("15000 feet is %.2lf m \n", height_m);

    return 0;
}