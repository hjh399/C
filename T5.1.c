#include <stdio.h>
#include <math.h>

int nextPrime(int prime, int num);
int isDivisible(int i,int num);

int main(void)
{
    
    int number;
    
    scanf("%d", &number);
    
    //输出开头
    printf("%d=",number);
    
    int i = 2;
    
    
    //开始i的for循环?
    while (i != 0 && number != 2) {
        
        //判断能不能整除number
        if(isDivisible(i,number)){
            //能整除，number/=i;i=2;
            printf("%dx",i);
            number /= i;
            i = 2;
        }
        
        //不能整除，找到下一个素数i，
        else{
            i = nextPrime(i, number);
        }
        
    }
    
    //如果i=0.输出number，结束；
    //if (i == 0) {
    printf("%d",number);
    //}
    
}

//输入一个素数，输入下一个素数，如果素数>num，return 0
int nextPrime(int prime, int num)
{
    int isPrime = 0;
    int i;
    
    for (i = prime++; i <= sqrt(num) && !isPrime/*i不是素数*/; i++) {
        
        isPrime = 1;
        
        for (int j = 2; j <= sqrt(i) && isPrime; j++) {
            if (isDivisible(j, i)) {
                isPrime = 0;
            }
        }
        
    }
    
    if (!isPrime) {
        i = 0;
    }
    
    return i;
}


//能不能整除
int isDivisible(int i,int num)
{
    
    int divisible = 0;
    
    if (num % i == 0) {
        divisible = 1;
    }
    
    return divisible;
}
