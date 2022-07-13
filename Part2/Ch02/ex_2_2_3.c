#include <stdio.h>

int main(void){
    int mul[9][9] = {0,};
    int i=0, j=0;
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            mul[i-1][j-1] = i*j;
            printf("%3d ",mul[i-1][j-1]);
        }
            printf("\n");
    }

    return 0;
}