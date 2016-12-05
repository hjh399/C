#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int digit = 1;
    
    scanf("%d",&num);
    
    // 判断是否要输出fu
    if (num < 0) {
        printf("fu ");
        num *= -1;
    }
    
    // 判断数字位数
    for (int t = num ; t > 9 ; t /= 10) {
        digit *= 10;
    }
    
    //拆数
    for (int n = -1; digit > 0 ; digit /= 10 ) {
        
        if (n != -1) {
            printf(" ");
        }
        
        
        n = num / digit;
        switch (n) {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
                
            default:
                break;
        }
        
        num %= digit;
    }
    
    return 0;
}
