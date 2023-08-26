// #include<stdio.h>
// long long int sum(long long int arr[],int n, int i)
// {
//     if(i==n) return 0;
//    long long int l = sum(arr,n,i+1);
//    return l+arr[i];
// }
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     long long int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%lld",&arr[i]);
//     }
//     long long int result = sum(arr,n,0);
//     printf("%lld",result);
//     return 0;
// }

// #include<stdio.h>
// long long int sum(long long int ar[], int n, int i)
// {
//     if(i==n) return 0;
//     long long int l = sum(ar,n,i+1);
//     return l + ar[i];
// }
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     long long int ar[n];
//     for(long long int i=0;i<n;i++)
//     {
//         scanf("%lld",&ar[i]);
//     }
//     long long int  result = sum(ar,n,0);
//     printf("%lld",result);
//     return 0;
// }

// #include<stdio.h>
// long long int sum(long long int ar[], int n, int i)
// {
//     if(i==n) return 0;
//     long long int l = sum(ar,n,i+1);
//     return l+ ar[i];
// }
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     long long int ar[n];
//     for(long long int i=0;i<n;i++)
//     {
//         scanf("%lld",&ar[i]);
//     }
//     long long int result = sum(ar,n,0);
//     printf("%lld",result);
//     return 0;
// }

#include<stdio.h>
long long int sum(long long int ar[],int n, int i)
{
    if(i==n) return 0;
    long long int l = sum(ar,n,i+1);
    return l+ ar[i];
}
int main ()
{
    int n;
    scanf("%d",&n);
    long long int ar[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int result = sum(ar,n,0);
    printf("%lld",result);
    return 0;
}