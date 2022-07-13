#include <stdio.h>

int main(void){
    double array1[5] = {2.2, 3.5, 2.5, 10.1, 4.0};
    double array2[5] = {3.3, 2.0, 4.0,1.0, 2.5};

    for(int i =0; i < 5; i++){
        printf("%.2lf ", array1[i]*array2[2]);
    }
    printf("\n");
    return 0;
}