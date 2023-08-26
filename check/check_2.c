#include<stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    if(N >= 1 && N <= 2^31){
        if(N > 1000 && N < 1500){
        printf("I will buy Punjabi");
        }
        else if(N >= 1500){
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
        }
        else{
        printf("Bad luck!");
        }
    }
    else{
        printf("Sorry!");
    }
    // if (tk > 1500)
    // {
    //     printf("I will buy Punjabi");
    // }
    // else if (tk >= 1500)
    // {
    //     printf("I will buy new shoes");
    // }
    // else if (tk >= 1500)
    // {
    //     printf("Alisa will buy new shoes");
    // }
    // else
    // {
    //     printf("Bad luck!");
    // }
    return 0;
}