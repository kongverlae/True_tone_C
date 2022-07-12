#include <stdio.h>

int main(void){
    const double PI = 3.14;
    double radius;
    double area;
    double round;

    printf("input radius : ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    round = 2 * PI * radius;

    printf("area = %.2lf, round = %.2lf \n", area, round);

    return 0;
}