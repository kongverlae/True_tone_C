#include <stdio.h>
#include <string.h>

int main(void){
    int birth = 0;
    int mon = 0;
    char zodiac[20];
    printf("input birth ex)981201 : \nme: ");
    scanf("%d",&birth);
    mon = birth%10000;
    switch(mon){
        case 321 ... 419: 
            strcpy(zodiac,"양자리");
            break;
        case 420 ... 520: 
            strcpy(zodiac,"황소자리");
            break;
        case 521 ... 621: 
            strcpy(zodiac,"쌍둥이자리");
            break;
        case 622 ... 722: 
            strcpy(zodiac,"게자리");
            break;
        case 723 ... 822: 
            strcpy(zodiac,"사자자리");
            break;
        case 823 ... 922: 
            strcpy(zodiac,"처녀자리");
            break;
        case 923 ... 1022: 
            strcpy(zodiac,"천칭자리");
            break;
        case 1023 ... 1122: 
            strcpy(zodiac,"전갈자리");
            break;
        case 1123 ... 1224: 
            strcpy(zodiac,"궁수자리");
            break;
        case 1225 ... 1231: 
            strcpy(zodiac,"염소자리");
            break;
        case 101 ... 119: 
            strcpy(zodiac,"염소자리");
            break;
        case 120 ... 218: 
            strcpy(zodiac,"물병자리");
            break;
        case 219 ... 320: 
            strcpy(zodiac,"물고기자리");
            break;
        default:
            strcpy(zodiac,"wrong birth");
            break;
    }
    printf("birth : %d,zodiac_sign : %s\n",birth,zodiac);
    
    return 0;
}