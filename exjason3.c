#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 0;
    int somme = 0;
    int i;

    printf("Choisis deux nombre entre 1 et 1000\n");
    scanf("%d %d", &min, &max);

    if ( min<1 || max>1000 || min>=max)
    {
        return -1;
    }
     
    for(i = min ; i <= max ; i++)
        somme += i;

    printf("Somme final: %d\n", somme);

    return 0;

}