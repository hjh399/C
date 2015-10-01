#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    
    if (number < 0) {
        printf("%s", "fu ");
        number *= -1;
    }
    
    int num = number;
    int weishu = 1;
    while (num > 9) {
        num /= 10;
        weishu *= 10;
    }
    
    while (weishu > 0) {
        int numa = 0;
        numa = number / weishu;
        
        switch (numa) {
            case 1:
                printf("%s", "yi");
                break;
            case 2:
                printf("%s", "er");
                break;
            case 3:
                printf("%s", "san");
                break;
            case 4:
                printf("%s", "si");
                break;
            case 5:
                printf("%s", "wu");
                break;
            case 6:
                printf("%s", "liu");
                break;
            case 7:
                printf("%s", "qi");
                break;
            case 8:
                printf("%s", "ba");
                break;
            case 9:
                printf("%s", "jiu");
                break;
            case 0:
                printf("%s", "ling");
                break;
            default:
                break;
        }
        
        if (number > 10) {
            printf("%s", " ");
        }
        
        number %= 10;
        weishu /= 10;
    }
    
    return 0;
}