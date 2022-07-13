#include <stdio.h>

int main(void){
    char* string[2] = {"I Love C", "Hello World"};
    printf("%s",string[0]);
    printf("%s\n",&(string[1][5]));

    return 0;
}
