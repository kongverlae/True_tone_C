#include <stdio.h>

void arrinput(int*p, int n);

int main(void){
    int array[5] = {10, 20, 30, 40, 50};
    void (*pfunc)(int* p, int n);

    pfunc = arrinput;
    pfunc(array, 5);

    return 0;
}

void arrinput(int* p, int n){
    for(int i = 0; i < n; i++){
        printf("*(p+%d) : %d\n",i ,*(p+i));
    }
    return;
}