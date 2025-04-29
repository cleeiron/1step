#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    int result;
    
    if (nb < 0)
        return 0;
    
    while (nb > 0)      
    {
        result *= nb;
        nb--;
    }
    return result;
    
    ft_recursive_factorial
}

int main()   
{
    ft_recursive_factorial();
    int nb;
    int result;

    nb = 0;
    result = 0;
    printf("Choisis un chiffre\n");
    scanf("%d",&nb);
    result = ft_iterative_factorial(nb);
    printf("La factorielle de : %d! est %d\n", nb , result);
    return 0;
}#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)

    return 0;
}