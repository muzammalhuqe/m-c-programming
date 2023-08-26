#include<stdio.h>
void world(void)
{
    printf("world start\n");
    printf("world end\n");
}
void hello(void)
{
    printf("hello start\n");
    world();
    printf("hello end\n");
}
int main ()
{
    printf("main start\n");
    hello();
    printf("main end\n");
    return 0;
}