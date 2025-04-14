#include <stdio.h>
#include <unistd.h>

/* Reformate moi cette func c'est dégeu ! */
int Calcul( int nb, int nb1, char operateur)

{
    if (operateur == '+')
{
    return nb + nb1;
}

    else if (operateur == '-')
{
    return nb - nb1;
}

    else if (operateur == '*')
{
    return nb * nb1;
}

    else if (operateur = '/')
    if (nb1 != 0) 
{
    return nb / nb1;
}
 
    else 
{
     write(1, "Error\n", 7);

    return 0;
}
}


void ft_putstr(char *str)
{
    while (*str)
    write(1, str++, 1); /*Tu peux tab c'est plus propre !*/
}

int main ()

{
    int nb, nb1; /*Evite au possible d'assigné deux variables sur la même ligne*/
    char operateur;
    char chaine1 [50];


    ft_putstr("Quel est ton calcul ?");
    write(1, "\n",1);

    scanf ("%d %c %d", &nb, &operateur, &nb1);
    int resultat = Calcul(nb, nb1, operateur); /*Pas besoin de recaster en int!*/

    sprintf(chaine1,"Le resultat de %d %c %d est :%d\n", nb, operateur,nb1, resultat);
    ft_putstr(chaine1);
   
    return 0;

}