#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int first=ar[0][0];
    int flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && ar[i][j] != first)
            {
                flag=0;
                break;
            }
            else if(i != j && ar[i][j] != 0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}