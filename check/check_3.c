#include<stdio.h>
int main()
{
    long long N; 
    scanf("%lld",&N);
    if(0 <= N <= 500000000.5)
        if(N % 3 == 0)
        {
            printf("Yes");
        }

        else
        {
            printf("NO");
        }
    else{
        printf("sorry");
    }

    return 0;
}