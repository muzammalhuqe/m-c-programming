#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("cox bazar jabo\n");
        if(tk >= 10000)
        {
            printf("sain martin jabo\n");
        }
        else
        {
            printf("ferot cole jabo\n");
        }
    }
    else
    {
        printf("kothaw jabona\n");
    }
    return 0;
}