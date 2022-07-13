#include <stdio.h>

int main(void){
    char* array1 = "ABCD";
    char array2[] = "ABCD";

    // array1[0] = 'X';
    array2[0] = 'X';

    printf("array1 : %s\n",array1);
    printf("array2 : %s\n",array2);

    return 0;
}