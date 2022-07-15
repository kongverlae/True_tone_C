#include <stdio.h>
#include <string.h>

int main(void){

    int red = 1, blue = 2;
    int yellow;
    char answer[10];

    while(1){
        printf("Before\n");
        printf("red=%d, blue=%d\n", red, blue);

        printf("Do you want swap this? (yes/no)\nme : ");
        scanf("%s",answer);
        if(0==strcmp(answer,"yes")){
            yellow = red;
            red = blue;
            blue = yellow;

            printf("After\n");
            printf("red=%d, blue=%d\n\n", red, blue);
        }else if(0==strcmp(answer,"no")){
            break;
        }else printf("Wrong answer. please try again.\n\n"); 
    }
    return 0;
}