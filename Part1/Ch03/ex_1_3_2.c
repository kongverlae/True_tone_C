#include <stdio.h>

int main(void){
    int jean[3] = {400, 350, 450};
    int select;

    printf(" - Choose your jean - \n");
    printf("| Black jean - 0 | Blue jean 1 | Gray jean 2 |\n");
    printf("|  400 dollar    |  350 dollar |  450 dollar |\n");
    scanf("%d",&select);
    if(select<=2&&select>=0){
        printf("me: Hear is the %d dollars.\n",jean[select]);
        printf("Purchase finished. \n");
    }else printf("Sorry, we dosen't have that jean...\n");
    return 0; 
}