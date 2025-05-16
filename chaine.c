#include<stdio.h>
#include<string.h>

int main (void)
{
    signed char identite [256];
    signed char Nom [256];
    signed char Prenom [256];
    signed char bio [256];
   
    printf("quel est ton prénom ?\n");
    scanf("%s", Prenom);
    printf("Quel est votre nom\n");
    scanf("%s", Nom);
    int test = strcmp(Nom, Prenom);
    if (test == 0)
        printf("Nom et Prenom sont identiques\n");
    else
        printf("Nom Prénom sont différents\n");
    
    strcpy(identite, Nom);
    strcat(identite, ",");
    strcat(identite, Prenom);
    
    printf("Ton nom complet est : %s\n", identite);

    printf("Ecris moi une phrase sur toi\n");
    scanf("%[^\n]", bio);

    printf("La taille d'identite est : %zu\n", strlen(identite));
    printf("La taille de la bio est : %zu\n", strlen(bio));
    
    return(0);
}