#include <stdio.h>

int main(void)

{

int total_achat = 0, somme_donnee = 0, somme_rendu = 0;
int billet20, billet10, billet5, piece2 ,piece1;

somme_rendu = somme_donnee - total_achat;

printf("Entrez le montant total des achats :\n");
scanf("%d", &total_achat);

printf("Saisissez la somme donnée :\n");
scanf("%d", &somme_donnee);


    if (somme_donnee <= total_achat)
{
    return 0;
}
    else if (somme_donnee>total_achat)
{
    
    billet20 = somme_rendu / 20;
    somme_rendu %= 20;
    billet10 = somme_rendu / 10;
    somme_rendu %= 10;
    billet5 = somme_rendu / 5;
    somme_rendu %= 5;
    piece2 = somme_rendu / 2;
    somme_rendu %= 2;
    piece1 = somme_rendu / 1;
    somme_rendu %=1;

    if (billet20 > 0)
        printf("Nombre de billet de 20 euros à rendre : %d\n", billet20);
    if (billet10 > 0)
        printf("Nombre de billet de 10 euros à rendre : %d\n", billet10);
    if (billet5 > 0)
        printf("Nombre de billet de 5 euros à rendre : %d\n", billet5);
    if (piece2 > 0)
        printf("Nombre de pièces de 2 euros à rendre : %d\n", piece2);
    if (piece1 > 0)
        printf("Nombre de pièces de 1 euros à rendre : %d\n", piece1);
}
    

 return 0;

}