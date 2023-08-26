// #include<stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     long long int Tiger=0,Pathan=0;
//     for(long long int i=0;i<n;i++)
//     {
//         long long int t,p;
//         scanf("%lld %lld",&t,&p);
//         if(t > p)
//         {
//             Tiger++;
//         }
//         else
//         {
//             Pathan++;
//         }
//     }
//     if(Tiger > Pathan)
//     {
//         printf("Tiger is winer");
//     }
//     if(Tiger < Pathan)
//     {
//         printf("Pathan");
//     }
//     if(Tiger == Pathan)
//     {
//         printf("Draw");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main ()
// {
//     int num;
//     scanf("%d",&num);
//     int Tiger = 0, Pathan = 0;
//     for(int i=0;i<=num;i++)
//     {
//         long long int a,b;
//         scanf("%lld %lld",&a,&b);
//         if(a > b)
//         {
//             Tiger++;
//         }
//         else if(b > a)
//         {
//             Pathan++;
//         }
//     }
//     if(Tiger > Pathan)
//     {
//         printf("Tiger");
//     }
//     else if(Pathan > Tiger)
//     {
//         printf("Pathan");
//     }
//     else
//     {
//         printf("Draw");
//     }
    
//     return 0;
// }
#include<stdio.h>
int main ()
{
    int test, tiger = 0,pathan = 0;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        long long int x1, x2;
        scanf("%lld %lld",&x1,&x2);
        if(x1 > x2)
        {
            tiger++;
        }
        else if(x2 > x1)
        {
            pathan++;
        }
    }
    if(tiger > pathan)
    {
        printf("Tiger");
    }
    else if(pathan > tiger)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}