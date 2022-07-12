#include <stdio.h>
int Add(int a, int b){return a+b;}
int Count(int cnt){return cnt+1;}
int main(void){
    int a, b;
    int result;
    int cnt=0;
    int i = 0;

    for(i = 0; i<100; i++){
        printf("input number a, b : ");
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) break;
        result = Add(a,b);
        cnt = Count(cnt);
        printf("result : %d\n", result);
    }
    printf("count : %d\n", cnt);

    return 0;
}