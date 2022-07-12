#include <stdio.h>

int main(void) {
    int i=0, j=7, k=0;

    while (i<5) {
        while (k<i) {
            printf(" ");
            k++;
        }
        k=0;
        while (k<j) {
            printf("*");
            k++;
        }
        printf("\n");
        k=0;
        j-=2;
        i++;
    } 
    
    return 0;
}