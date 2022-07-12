#include <stdio.h>

int main(void) {
    int a, b;
    while (1) {
        printf("input Ctrl + c for exit. \n");
        printf("input value a, b : ");
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d\n", a, b, a+b);
    }
    return 0;
}
