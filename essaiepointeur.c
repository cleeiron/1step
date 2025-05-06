#include <stdio.h>
void mowgli(int *c)
{
    *c = 6;
}
int main(void)
{
int a = 42;
int *ptr = &a;

int b = 7;

printf("%d\n", *ptr);

mowgli(&b);
printf("%d\n", b);
}
