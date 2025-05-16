#include<stdio.h>

int main(void)
{
    int a = 6;
    int b = 3;

    int *c = &b;
    int *d = &a;

    printf("a = %d et b= %d\n", *c, *d);
}