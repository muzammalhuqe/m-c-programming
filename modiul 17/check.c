//  print 1 to 5

// #include<stdio.h>
// void fun(int a)
// {
//     if(a==6) return;
//     printf("%d\n",a);
//     fun(a+1);
// }
// int main ()
// {
//     fun(1);
//     return 0;
// }

//  print 5 to 1

// #include<stdio.h>
// void fun(int a)
// {
//     if (a==0) return;
//     printf ("%d\n",a);
//     fun(a-1);
// }
// int main ()
// {
//     fun(5);
//     return 0;
// }

// print array

// #include<stdio.h>
// void fun(int ar[], int n, int i)
// {
//     if(i==n) return ;
//     printf("%d\n",ar[i]);
//     fun(ar,n,i+1);
// }

// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     fun(ar,n,0);
//     return 0;
// }

// print 5 to 1

// #include<stdio.h>
// void fun(int n)
// {
//     if(n==6) return;
//     fun(n+1);
//     printf("%d\n",n);
// }
// int main ()
// {
//     fun(1);
//     return 0;
// }

// lenth of string

#include<stdio.h>
int fun(char ar[], int i)
{
    if(ar[i]=='\0') return 0;
    int len = fun(ar,i+1);
    return len+1;
}
int main ()
{
    char ar[100]="muzammel";
    int lenth = fun(ar,0);
    printf("%d\n",lenth);
    return 0;
}