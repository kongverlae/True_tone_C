#include <stdio.h>

int main(void){
    const double MAX_AGE = 100;
    const int SMK_TIM = 2;
    int day_smk;
    double dead_time;

    printf("How much do you smoking? \nme:");
    scanf("%d", &day_smk);

    dead_time = (double)day_smk*SMK_TIM*20*365;
    dead_time = dead_time/60/24/365;

    printf("Expected your max age is %.2lf age. ", MAX_AGE - dead_time);
    printf("and removed time is %.2lf year", dead_time);
    
    return 0;
}