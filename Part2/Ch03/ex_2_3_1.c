#include <stdio.h>

int main(void){
    char c = 'B';
    int num = 10;
    char* cp = NULL;
    int* ip = NULL;

    cp = &c ;
    ip = &num;

    *cp = 'A';
    *ip = 20;

    printf("&num : %x, num : %d\n", &num, num);
    printf("ip : %x,\t *ip : %d\n", ip, *ip);
    printf("&c : %x,\t c : %c\n", &c, c);
    printf("cp : %x,\t *cp : %c\n", cp, *cp);

    return 0;
}