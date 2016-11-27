#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int ji = 0,ou = 0;
    int num = 1;
    
    scanf("%d",&num);
    while (num != -1){
        
        if (num % 2 == 0) {
            ou++;
        }
        else{
            ji++;
        }
        
        scanf("%d",&num);
    }
    
    printf("%d %d" , ji , ou);
    return 0;
}