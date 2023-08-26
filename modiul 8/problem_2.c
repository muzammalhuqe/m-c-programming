#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d",&n);
    
    if(n >=1){
        for(i = 1; i <=n; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i = n; i <= 1; i++){
            printf("%d ", i);
        }
    }
    
    return 0;
}