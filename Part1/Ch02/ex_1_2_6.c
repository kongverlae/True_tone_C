#include <stdio.h>

int main(void){
    char name[20];
    char id[20];
    
    printf("input name : ");
    scanf("%s",name);
    printf("input id : ");
    scanf("%s",id);

    printf("name : %s, id : %s\n", name, id);
    return 0;
}