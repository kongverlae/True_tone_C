#include <stdio.h>

int main(void) {
    int i = 0;
    int score;
    double average = 0;
    while (i<10) {
        printf("average score. \n");
        printf("input your score : ");
        scanf("%d", &score);
        average += score;
        i++;
    }
    average /= 10;
    printf("average score : %lf \n", average);

    return 0;
}
