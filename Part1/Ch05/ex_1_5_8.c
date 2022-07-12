#include <stdio.h>

int main(void){
    int hour;
    int min;
    int sec;

    printf("시, 분, 초를 입력하세요 : ");
    scanf("%d %d %d", &hour, &min, &sec);

    sec = sec + (min * 60) + (hour * 60 * 60);

    printf("00:00:00 기준으로 %d초 지났습니다. \n",sec);

    return 0;
}