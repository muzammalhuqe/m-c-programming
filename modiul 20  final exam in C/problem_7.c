#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    int m,m1,m2;
    if(n%2==1)
    {
        m=(n+1)/2;
        printf("%d",ar[m-1]);
    }
    else if(n%2==0)
    {
        m1=(n/2);
        m2=(n/2)+1;
        printf("%d %d",ar[m1-1], ar[m2-1]);
    }
    return 0;
}