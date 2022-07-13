#include <stdio.h>

int main(void){
    int array[3] = {10, 20, 30};
    int* ip = NULL;
    int** ipp = NULL;

    printf("1 : %d, 2 : %d, 3 : %d, ip : %x, ipp : %x\n", array[0], array[1], array[2], ip, ipp);
    ipp = &ip;
    ip = array;
    printf("1 : %d, 2 : %d, 3 : %d, ip : %x, ipp : %x\n", array[0], array[1], array[2], ip, ipp);
    
    return 0;
}