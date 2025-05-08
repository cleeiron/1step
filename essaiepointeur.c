#include <stdio.h>

void mowgli(int *c)
{
    *c = 6;
}
int main(void)
{
    int a = 3;
    int *ptr = &a;
    int b = 9;

    printf("%d\n", *ptr);
    mowgli(&b);
    printf("%d\n", b);
    return(0);
}