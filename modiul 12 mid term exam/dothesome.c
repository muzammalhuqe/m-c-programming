#include <stdio.h>
int main() 
{
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= k; i++)
    {
        for(int k=1; k<=n;k++)
        {
            printf("%d ",k);
            
        }
        printf("\n");
    } 
    
	
	return 0;
}