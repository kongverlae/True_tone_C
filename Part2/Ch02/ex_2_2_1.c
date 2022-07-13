#include <stdio.h>

int main(void){
    int array1[2][4] = {1,2,3,4,5,6,7,8};
    int array2[4][2];
    int i=0, j=0;

    for(i = 0; i<4; i++){
        array2[i][0] = array1[1][i];
        array2[i][1] = array1[0][i];
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j<4; j++){
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}