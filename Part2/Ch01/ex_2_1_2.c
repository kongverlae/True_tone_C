#include <stdio.h>

int main(void){
    int array[10] = {};
    int total = 0;

    for(int i = 0 ; i < 10 ; i++ ) {
        printf("intput score %d : ",i+1);
        scanf("%d", &array[i]);
        total += array[i];
    }
    printf("total score : %d\n",total);
    printf("average score : %.2lf\n", (double)total/10);
    
    return 0;
}