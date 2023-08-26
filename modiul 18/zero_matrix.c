#include<stdio.h>
int main ()
{
    int row,colam;
    scanf("%d %d",&row,&colam);
    int ar[row][colam];
    int element=row*colam;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colam;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colam;j++)
        if(ar[i][j] == 0)
        {
            count++;
        }
    }
    if(element==count)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }
    return 0;
}