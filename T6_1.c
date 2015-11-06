#include "stdio.h"
#include "math.h"

int isNotPrime(int num){
    int isNotPrime=0;
    for (int i = 2; i <= pow(num,0.5); ++i)
    {
        if(num%i==0){
            isNotPrime=i;
            break;
        }
    }
    return isNotPrime;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);
    
    printf("%d=",num);
    
    int i = isNotPrime(num);
    if (!i)
    {
        printf("%d",num);
    }else{
        do{
            printf("%dx",i);
            num/=i;
            i = isNotPrime(num);
        } while (i);
        printf("%d",num);
    }
    
    return 0;
}
