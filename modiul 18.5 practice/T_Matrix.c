// #include<stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     int row=n;
//     int col=n;
//     int ar[row][col];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     int sum_primary=0;
//     int sum_secondary=0;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             // primary
//             if(i==j)
//             {
//                 sum_primary+=ar[i][j];
//             }
//             // secondary
//             if(i+j==row-1)
//             {
//                 sum_secondary+=ar[i][j];
//             }
//         }
//     }
//     int diff = sum_primary - sum_secondary;
//     if(diff < 0)
//     {
//         diff=diff * -1;
//     }
//     printf("%d",diff);


//     return 0;
// }

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int row=n;
    int col=n;
    int ar[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int sum_primary=0;
    int sum_secondary=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum_primary += ar[i][j];
            }
            if(i+j==row-1)
            {
                sum_secondary += ar[i][j];
            }
        }
    }
    int difference = sum_primary - sum_secondary;
    if(difference < 0)
    {
        difference = difference * -1;
    }
    printf("%d",difference);
    return 0;
}