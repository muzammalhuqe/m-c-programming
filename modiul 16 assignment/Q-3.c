// #include<stdio.h>

// int count_before_zero(ar[n])
// {
//     int count=0;
    
//     for(int i = 0; i < n; i++)
//     {
//         if(ar[i] != 0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("%d ", count);
// }
// int main ()
// {
//     int n, count=0;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     count_before_zero();
//     return ar[n];
// }



















// #include<stdio.h>
// void count_before_zero(void)
// {
//     int n, count=0;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i = 0; i < n; i++)
//     {
//         if(a[i] != 0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("%d ", count);
// }
// int main ()
// {
//     count_before_zero();
//     return 0;
// }

#include<stdio.h>
int count_before_zero(int *ar,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i] != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
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
    int result = count_before_zero(ar,n);
    printf("%d",result);
    return 0;
}