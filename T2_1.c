#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d",&number);
    
    int hour = number/100;
    int minute = number%100;
    
    hour -= 8;
    if(hour < 0){
        hour += 24;
    }
    
    number = hour*100+minute;
    printf("%d",number);
    
    return 0;
}