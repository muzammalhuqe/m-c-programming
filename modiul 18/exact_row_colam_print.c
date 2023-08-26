#include<stdio.h>
int main ()
{
    int row, colam;
    scanf("%d %d",&row,&colam);
    int ar[row][colam];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colam;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    // exact row

    // int c;
    // scanf("%d",&c);
    for(int i=0; i<colam;i++)
    {
        printf("%d ",ar[2][i]);
    }
    
    // exact colam

    // int r;
    // scanf("%d",&r);
    // for(int i=0;i<row;i++)
    // {
    //     printf("%d ",ar[i][r]);
    // }
    // return 0;
}