#include <stdio.h>

int main(void){
    int array1[4][3] = {23, 75, 85, 12, 77, 51, 25, 66, 30, 19, 90, 88};
    int array2[4][3] = {11, 15, 47, 74, 85, 69, 57, 86, 28, 90, 22, 33};
    int plus[4][3]={0,}, minus[4][3]={0,};
    int i=0, j=0;

    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            plus[i][j] = array1[i][j] + array2[i][j];
            minus[i][j] = array1[i][j] - array2[i][j];
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("%5d",plus[i][j]);
        }
        printf("\t|");
        for(j=0; j<3; j++){
            printf("%5d",minus[i][j]);
        }
        printf("\n");
    }

    return 0;
}