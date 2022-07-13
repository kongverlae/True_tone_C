#include <stdio.h>

int main(void){
    int array[15] = {90, 78, 77, 98, 98, 80, 45, 67, 88, 57, 88, 99, 65, 55, 74};
    int sum_row[3] ={};
    int sum_column[5] = {};
    int total = 0;

    for(int i = 0 ; i < 15 ; i++ ){
        sum_row[i/5] += array[i];
        sum_column[i%5] += array[i];
        total += array[i];
    }
    printf("----------------------------------------\n");
    printf("sum_row\n");
    printf("1:%5d 2:%5d 3:%5d\n",sum_row[0],sum_row[1],sum_row[2]);
    printf("----------------------------------------\n");
    printf("sum_column\n");
    printf("1:%5d 2:%5d 3:%5d 4:%5d 5:%5d\n",sum_column[0],sum_column[1],sum_column[2],sum_column[3],sum_column[4]);
    printf("----------------------------------------\n");
    printf("total : %d\n",total);
    return 0;
}