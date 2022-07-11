#include <stdio.h>

int main(void){

    const int THIS_YEAR = 2010;
    const int MY_BORN = 1990;
    const int BRO_BORN = 1992;

    printf("This year is %d\n", THIS_YEAR);
    printf("My age is %d\n", THIS_YEAR-MY_BORN+1);
    printf("I'm born in %d. and %d years ago \n", MY_BORN,THIS_YEAR-MY_BORN );
    printf("My brother`s age is %d\n", THIS_YEAR-BRO_BORN+1);
    printf("He is born in %d. and %d years ago \n", BRO_BORN,THIS_YEAR-BRO_BORN );
    
    return 0;
}