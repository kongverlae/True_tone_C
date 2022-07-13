#include <stdio.h>

int main(void){
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;

    printf("num1 : %d, ip1 : %x, ip2 : %x. ip3 : %x\n", num1, ip1, ip2, ip3);
    ip3 = &ip2;
    ip2 = &ip1;
    ip1 = &num1;
    printf("num1 : %d, ip1 : %x, ip2 : %x. ip3 : %x\n", num1, ip1, ip2, ip3);

    *ip1 = 20;
    printf("num1 : %d, ip1 : %x, ip2 : %x. ip3 : %x\n", num1, ip1, ip2, ip3);

    **ip2 = 30;
    printf("num1 : %d, ip1 : %x, ip2 : %x. ip3 : %x\n", num1, ip1, ip2, ip3);


    ***ip3 = 40;
    printf("num1 : %d, ip1 : %x, ip2 : %x. ip3 : %x\n", num1, ip1, ip2, ip3);


    return 0;
}