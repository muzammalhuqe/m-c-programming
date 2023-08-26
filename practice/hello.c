#include<stdio.h>
int main()
{
    // char ch,s[100];
    // scanf("%c",&ch);
    // printf("%c\n",ch);
    // scanf("%s", &s);
    // printf("%s\n",s);
    // scanf("\n");
    // scanf("%[^\n]%*c",s);
    // printf("%s",s);

     char ch,s[100] ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");//to avoid new line character as input to next string
    scanf("%[^\n]%*c", s);
    // or gets(s); can be used
   printf("%s",s);
    return 0;


    return 0;
}