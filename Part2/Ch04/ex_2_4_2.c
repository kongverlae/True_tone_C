#include <stdio.h>

int main(void){
    int array[5] = {10,20, 30, 40, 50};
    int* p = NULL;
    int i = 0;
    p = array;

    for(i=0;i<5;i++){
        printf("p[%d] : %d, *(p+%d) : %d\n",i,p[i],i,*(p+i));
    }
    return 0;
}