#include<stdio.h>
#include<string.h>

int main (void)
{
    char identite[256];
    char Nom[256];
    char Prenom[56];
    char bio[256];
    char phrase[500];
    int compteur = 0;
   
    printf("quel est ton prénom ?\n");
    scanf("%s", Prenom);
    printf("Quel est votre nom\n");
    scanf("%s", Nom);
        if (strcmp(Nom, Prenom))
            printf("Nom et Prenom sont identiques\n");
        else
            printf("Nom Prénom sont différents\n");

    if (strchr(Prenom,'C')!=NULL)
    {
                printf("Il y a la lettre c dans ton prénom\n");
    }
    else 
    {
        printf("Il n'y a pas la lettre c dans ton prenom\n");
    }

    strcpy(identite, Nom);
    strcat(identite, ",");
    strcat(identite, Prenom);
    
    printf("Ton nom complet est : %s\n", identite);

    printf("Ecris moi une phrase sur toi\n");
    while (getchar() != '\n');
    fgets(bio, sizeof(bio), stdin);
    bio[strcspn(bio, "\n")] = '\0';

    printf("La taille d'identite est : %ld\n", strlen(identite));
    printf("La taille de la bio est : %ld\n", strlen(bio));

    if (strstr(bio, "piscine") != NULL)
    {   
        printf("Tu vas bien à la piscine\n");
    }
    else
    {
        printf("tu ne vas pas à la piscine\n");
    }
    sprintf(phrase, "Bonjour je m'appelle %s , %s et je vais à la piscine\n", Prenom, Nom);
    printf("%s", phrase);

    for (int i = 0; i < strlen(bio); i++)
    if (bio[i] == 'e') compteur++;
    printf("La lettre 'e' apparaît %d fois dans ta bio.\n", compteur);

    
    return(0);
}