#include <stdio.h>

int main(void){
    const double PI = 3.14;
    double radius;
    double speed;
    double distance;
    double time;

    printf("반지름과 속력을 입력하세요 : ");
    scanf("%lf %lf", &radius, &speed);
    distance = radius*PI*2;
    time = (distance/speed)*60;

    printf("%.3lf minute needed for %.3lf km \n", time, distance);

    return 0;
}