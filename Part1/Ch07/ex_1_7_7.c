#include <stdio.h>

int main(void) {
    int i = 0;
    int score;
    double average = 0;
    printf("10 subject average score. \n");
    while (i<10) {
        printf("input your score : ");
        scanf("%d", &score);
        average += score;
        i++;
    }
    average /= 10;
    printf("average score : %lf \n", average);

    return 0;
}
