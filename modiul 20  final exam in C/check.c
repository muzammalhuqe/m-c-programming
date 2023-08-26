#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i;
    int upper=0,lower=0, space=0;
    char ch[100];
    // printf("Enter the String:\n");
    gets(ch);
    i=0;
    do{
if(ch[i]>='A' && ch[i]<='Z'){
    upper++;
}
else if(ch[i]>='a' && ch[i]<='z'){
    lower++;
}
i++;
    }while(ch[i]!=0);
printf("lowercase letters: %d",lower);
printf("\nuppercase letters: %d",upper);
getch();
    return 0;
}