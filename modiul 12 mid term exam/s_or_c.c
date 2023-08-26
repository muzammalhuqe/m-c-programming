#include<stdio.h>
int main ()
{
    int c;
    int small=0, capital= 0;
    while(scanf("%c",&c)!= EOF)
    {
        if(c >= 'A' && c <= 'Z')
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    printf("%d %d", capital,small);
    return 0;
}