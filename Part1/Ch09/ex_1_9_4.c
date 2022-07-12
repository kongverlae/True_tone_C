#include <stdio.h>
int getArea(int x, int y);

int main(void){
    int width, height, result;

    printf("input width, height : ");
    scanf("%d %d", &width, &height);

    result = getArea(width, height);
    
    printf(" Area : %d \n", result);

    return 0;
}

int getArea(int x, int y){
    return x*y;
}