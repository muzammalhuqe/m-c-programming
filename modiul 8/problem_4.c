#include<stdio.h>
int main ()
{
    int n, x, v;
    scanf("%d ", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
    scanf("%d", &ar[i]);
    } 
    
    scanf("%d %d",&x, &v);
  
    for( int i=n-1;i>=0;i--)
    {
   

        if(ar[i] == ar[x]){
            ar[x] = v;
            
        }
        printf("%d ", ar[i]);
    }
    return 0;
}