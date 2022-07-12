#include <stdio.h>
int sum(int n);

int main(void){
    int result;
    int n;
    printf("input number : ");
    scanf("%d",&n);
    
    result = sum(n);
    printf("sum 1 to %d : %d\n",n,result);
    return 0;
}

int sum(int n){
    int result;
    if(n==1) return 1;
    result = n+sum(n-1);
    return result;
}