#include "stdio.h"

int iswanshu(int num);

int main(int argc, char const *argv[])
{
    int n,m,wanshu=0;
    scanf("%d %d",&n,&m);
    
    for (int i = n; i <= m; ++i)
    {
        if (iswanshu(i))
        {

            if (wanshu) {
                printf(" %d", i);
            }
            else{
                printf("%d", i);
            }
            
            wanshu++;
        }
    }
    if (!wanshu)
    {
        printf("NIL\n");
    }
    
    
    return 0;
}

int iswanshu(int num){
    int sum=0;
    for (int i = 1; i < num; ++i)
    {
        if (sum>num)
        {
            break;	
        }
        if (num%i==0)
        {
            sum+=i;
        }	
    }
    if (sum != num) {
        sum=0;
    }
    return sum;
}
