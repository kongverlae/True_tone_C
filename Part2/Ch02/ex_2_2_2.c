#include <stdio.h>

int main(void){
    int array[3][3];
    int i, j, result=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("how many people's in hot blood apartment %d-%d?\nme : ",i+1,j+1);
            scanf("%d", &array[i][j]);
            result += array[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    printf("total number of people : %d\n", result);

    return 0;
}