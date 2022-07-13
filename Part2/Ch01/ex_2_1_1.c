#include <stdio.h>

int main(void){
     char array[6] = {'A','B','C'};

     for(int i = 0; i<3; i++){
        printf("%c ", array[i]);
        array[5-i] = array[i];
     }
    for(int i = 3;i<6;i++){
        printf("%c ", array[i]);
    }
    printf("\n");
}