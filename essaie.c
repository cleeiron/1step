#include<stdio.h>

int soustraction (int nb, int nb1)

{
    int result = nb - nb1;
    return result;

}

int main ()

{
    int nb , nb1, result;

    printf("Choisis deux nombres\n");
    scanf("%d %d",&nb,&nb1);
    result = soustraction(nb,nb1);
    printf("Le resultat est:%d\n", result);
    return 0;

}
