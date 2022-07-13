#include <stdio.h>

int main(void){
    char array1[5] = {'A','B','C','D','E'};
    int array2[5] = {10, 20, 30, 40, 50};
    double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};

    for(int i = 0; i < 5;  i++){
        printf("value of %x is %c \n", &array1[i], *(array1+i));
        printf("value of %x is %d \n", &array2[i], *(array2+i));
        printf("value of %x is %.2lf \n", &array3[i], *(array3+i));
    }
    
    return 0;
}