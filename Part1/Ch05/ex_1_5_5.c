#include <stdio.h>

int main(void){
    const int EXCH_RATE = 1284;
    int dollar, won;

    printf("How much dollar do you have?? \nme:");
    scanf("%d", &dollar);

    won = dollar * EXCH_RATE;

    printf("this is allmost %d won in korea.\n",won);
    return 0;
}
