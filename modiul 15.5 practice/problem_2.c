#include<stdio.h>
int my_len(char s[])
{
    int x = 0, count = 0;
    while (s[x] != '\0')
    {
        count++;
        x++;
    }
    return count;
}
int main ()
{
    char s[1001];
    scanf("%s",s);
    my_len(s);
    char result = my_len(s);
    printf("%d\n",result);
    return 0;
}