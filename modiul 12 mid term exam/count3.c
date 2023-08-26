#include<stdio.h>
int main ()
{
    int ar[1001]={0};
    char c;
    while(scanf("%c",&c) != EOF)
    {
        ar[c- 'a']++;
    }
    for (char i='a'; i<='z';i++)
    {
        printf("%c - %d\n",i,ar[i-'a']);
    }
    return 0;
}