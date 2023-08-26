#include<stdio.h>
// void digit(int n)
// {
//     if(n==0) return;
//     int i= n%10  // 4
//     digit(n/10);
//     printf("%d ",i);

// }
// int main ()
// {
//     int test;
//     scanf("%d",&test);
//     for(int i=0;i<test;i++)
//     {
//         int n;
//         scanf("%d",&n);
//     } 
//     digit(n);
//     return 0;
// }
// #include<stdio.h>
// void digit(int n)
// {
//     if(n==0) return;
//     int i = n%10;
//     digit(n/10);
//     printf("%d ",i);   
// }
// int main ()
// {
//     int test;
//     scanf("%d",&test);
//     for( int i=0;i<test;i++)
//     {
//         int n;
//         scanf("%d",&n);
//         digit(n);
//         printf("\n");
//         if(n==0)
//         {
//             printf("0");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
void digit(int n)
{
    if(n==0) return;
    int a = n%10;
    digit(n/10);
    printf("%d ",a);
}
int main ()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        digit(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}