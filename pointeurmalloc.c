#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *NombreNote = (int*) malloc (sizeof (int));
        if (NombreNote == NULL) 
    {
        printf("Échec\n");
            return 1;
    }
        printf("Combien de notes veux tu inclure dans le calcul ?\n");
        scanf("%d", NombreNote);
    }
    int main() {
        int *ptr;
    
        // On demande de la mémoire pour stocker 1 entier
        ptr = (int *)malloc(sizeof(int));
    
        if (ptr == NULL) {
            printf("Échec de l'allocation\n");
            return 1;
        }
    
        // On peut maintenant utiliser ptr comme une variable normale
        *ptr = 42;
        printf("Valeur pointée : %d\n", *ptr);
    
        // Quand on n’en a plus besoin : on libère la mémoire
        free(ptr);
    
        return 0;
}