#include <stdio.h>
int main()
{
    long long int A,B;
    
    scanf("%lld %lld",&A, &B);

    if(-1000000000 <= A && B <= 1000000000){
        long long x= A*B;
        printf("%lld\n",x);
    }
    else{
        printf("Requirement not full!");
    }
    return 0;
}