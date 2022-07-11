#include <stdio.h>

int main(void){
    char alp;
    char result;
    
    printf("input Alphabet : ");
    scanf("%c",&alp);

    if(alp>=97) result = alp - 32;
    else result = alp + 32;
    printf("change %c to %c \n", alp, result);

    return 0;
}