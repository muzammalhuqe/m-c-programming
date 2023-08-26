#include <stdio.h>

int main()
{
    int i, N;

    scanf("%d", &N);

    if(21 <= N && N <= 10000){
        for(i = 1; i <= N; i++)
        {
            if(i % 3 == 0 && i % 7 == 0)
            {
            printf("%d\n", i);
            }
        
        }
    }
    else{
        printf("Requirement are not completed!");
    }
    return 0;
}