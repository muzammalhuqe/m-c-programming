// Has Return + Parameter

#include<stdio.h>
int summation(int a, int b)
{
    int summation = a+b;
    return summation;
}
int main ()
{
    int x=summation(50,30);
    printf("%d",x);
    return 0;
}


// // Has Return + No Parameter

#include<stdio.h>
int mlt(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x=a*b;
    return x;

}
int main ()
{
    int x=mlt();
    printf("%d",x);
    return 0;
}

// No Return + Parameter

#include<stdio.h>
void pattern_print(int n)
{
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    pattern_print(n);
    return 0;
}

// No Return + No Parameter

#include<stdio.h>
void count_even_numbers(void)
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }
    }
    printf("%d",even);
}
int main ()
{
    count_even_numbers();
    return 0;
}