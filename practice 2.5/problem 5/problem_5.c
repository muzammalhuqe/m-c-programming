#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 10000 & tk <= 20000)
    {
        printf("gucci bag");
    }
    else if( tk>20000)
    {
        printf("gucci bag\ngucci belt");
    }
    else if (tk >= 5000 & tk<10000)
    {
        printf("levis bag");
    }
    else if (tk < 5000)
    {
        printf("somthing");
    } else 
    {
        printf("sorry");
    }
    return 0;
}