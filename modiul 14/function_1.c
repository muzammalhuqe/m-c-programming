#include<stdio.h>
// return_type name (parametar)
// {
//     code 
//     return what
// }

int sum(int x, int y)
{
    int sum=x+y;
    return sum;
}
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",sum(x,y));
    return 0;
}