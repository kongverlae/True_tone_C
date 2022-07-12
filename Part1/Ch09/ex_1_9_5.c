#include <stdio.h>
int squre(int n){ return n*n; }
int cube(int n){ return n*n*n; }
int quartic(int n){ return n*n*n*n; }
int quintic(int n){ return n*n*n*n*n; }

int main(void){
    int i = 1;
    printf("A TABLE OF POWERS\n");
    printf("--------------------------------------------------\n");
    printf("%10s%10s%10s%10s%10s\n","INTEGER", "SQUARE", "CUBE", "QUARTIC", "QUINTIC");
    printf("--------------------------------------------------\n");
    while(i<4){
        printf("%10d%10d%10d%10d%10d\n",i,squre(i), cube(i), quartic(i), quintic(i));
        i++;
    }

    return 0;
}