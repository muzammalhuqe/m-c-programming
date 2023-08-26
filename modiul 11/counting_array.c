#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }
    int cnt[101]={0};
    for( int i=0; i<n; i++)
    {
        int v=a[i];
        cnt[v]++;
    }
    for( int i=0; i<101; i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}