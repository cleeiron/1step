#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    temp = *b;
}
 int main(void)

{
    int a = 6;
    int b = 3;

    printf("Avant a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf("Après a = %d, b = %d\n", a , b);
    return(0);
}