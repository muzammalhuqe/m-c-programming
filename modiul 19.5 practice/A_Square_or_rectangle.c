#include<stdio.h>
int main ()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int w,h;
        scanf("%d %d",&w,&h);
        if(w%2==0 && h%2 ==0)
        {
            printf("Square\n");
            
        }
        else
        {
            printf("Rectangle\n");
        }
    }  
    return 0;
}