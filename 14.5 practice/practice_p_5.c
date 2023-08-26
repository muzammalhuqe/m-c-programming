#include<stdio.h>
int capital_to_small(char ch)
{
    char small = ch;
    char capital = small + 32;
    return capital;
}
int main ()
{
    char ch;
    scanf("%c",&ch);
    char result = capital_to_small(ch);
    printf("%c\n",result);
    return 0;
}