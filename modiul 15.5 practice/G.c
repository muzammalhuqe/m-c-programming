#include<stdio.h>
void min_and_max_numbers(int ar [],int n)
{
    int max=ar[0],min=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("%d %d\n",min,max);
}
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    min_and_max_numbers(ar,n);
    return 0;
}