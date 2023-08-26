#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[100000];
    int min=1001;
    int max=-100001;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==max)
        {
            a[i]=min;
        }
        else if(a[i]==min)
        {
            a[i]=max;
        }
        printf("%d ",a[i]);
    }
    
    
    return 0;
}