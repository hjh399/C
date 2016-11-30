#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int number,num,sum;
    
    scanf("%d",&number);
    
    for (int i=1; number > 0; i++) {

        //获取数字
        num = number % 10;
        //删除数字
        number /= 10;

        int same = i + num ;
       
        //加法计算
        if (same % 2 == 0) {
            sum += pow(2,i-1);
        }
    }
    printf("%d" , 1 % 2);
    printf("%d" , sum);
    return 0;
}