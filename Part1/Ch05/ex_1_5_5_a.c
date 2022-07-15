#include <stdio.h>

int main(void){
    const double WON_RATE = 1323.56;
    const double YEN_RATE = 138.88;
    double dollar, won, yen;

    printf("How much dollar do you have?? \nme:");
    scanf("%lf", &dollar);

    won = dollar * WON_RATE;
    yen = dollar * YEN_RATE;

    printf("this is allmost %.2lf won in korea.\n",won);
    printf("this is allmost %.2lf yen in Japan.\n",yen);
    return 0;
}
