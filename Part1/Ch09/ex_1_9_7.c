#include <stdio.h>
int Alpha(char c);

int main(void){
    int result;
    char ch;
    printf("input character : ");
    scanf("%c", &ch);
    result = Alpha(ch);
    
    printf("%d alphabet \n", result);

    return 0;
}

int Alpha(char c){
    if(c>=97) return c-96;
    return c-64;    
}