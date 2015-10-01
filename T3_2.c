#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    
    int i = 0;
    int sum = 0;
    while(number > 0){
        int a = 1;

        int num = number % 10;
        i++;
        // 判断奇偶，偶为-1
        if (num % 2 == 0){
            a *= -1;
        }
        if (i % 2 == 0){
            a *= -1;
        }
        // 判断奇偶一致
        if (a == 1)
        {
            sum += pow(2,i-1);
        }
        
        number /= 10;
    }
    printf("%d\n", sum);
    return 0;
}