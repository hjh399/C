#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);

    int r = num / 10;
    int s = num % 10;
    
    switch (s) {
        case 1:
            printf("Faint signals, barely perceptible");
            break;
        case 2:
            printf("Very weak signals");
            break;
        case 3:
            printf("Weak signals");
            break;
        case 4:
            printf("Fair signals");
            break;
        case 5:
            printf("Fairly good signals");
            break;
        case 6:
            printf("Good signals");
            break;
        case 7:
            printf("Moderately strong signals");
            break;
        case 8:
            printf("Strong signals");
            break;
        case 9:
            printf("Extremely strong signals");
            break;
            
        default:
            break;
    }
    
    printf(", ");
    
    switch (r) {
        case 1:
            printf("unreadable");
            break;
        case 2:
            printf("barely readable, occasional words distinguishable");
            break;
        case 3:
            printf("readable with considerable difficulty");
            break;
        case 4:
            printf("readable with practically no difficulty");
            break;
        case 5:
            printf("perfectly readable");
            break;
            
        default:
            break;
    }
    
    printf(".");
    
    return 0;
}