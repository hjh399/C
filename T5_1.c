#include "stdio.h"

int main(int argc, char const *argv[])
{
    int num1,num2,sum,num;
    scanf("%d/%d" ,&num1,&num2);
    
    printf("0.");
    
    while(num1!=0&&sum<200){
        num=num1*10/num2;
        printf("%d", num);
        
        num1=num1*10%num2;
        
        sum++;
    }
    
    return 0;
}