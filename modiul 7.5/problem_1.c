#include<stdio.h>
int main ()
{
    long long int n;
    scanf("%lld ",&n);
    long long int ar [n];
    long long int sum=0;
    for(long long int i=0; i<n; i++)
    {
        scanf("%lld ",&ar[i]);
        sum=sum+ar[i];
    }
    if(sum<0)
    {
        sum= -1 * sum;
        printf("%d",sum);
    }
    else
    {
        printf("%d",sum);
    }

    return 0;
}