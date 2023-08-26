#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);
    int me = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == x)
        {
            me++;
            
        }
    }
    printf("%d",me);

    return 0;
}