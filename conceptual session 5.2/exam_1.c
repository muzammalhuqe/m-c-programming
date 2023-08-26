#include<stdio.h>
int main ()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("%d\n",a-(b+c+d)); 
    }
    return 0;
}