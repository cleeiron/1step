#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb<=1)
    return(1);

    return nb*ft_recursive_factorial(nb-1);

}
int main(void)
{
    int nb;
    int result;

    printf("Choisis un chiffre\n");
    scanf("%d", &nb);

    result = ft_recursive_factorial(nb);
    printf("Le resultat de la factorielle de %d est %d\n", nb, result);

    return(0);

}