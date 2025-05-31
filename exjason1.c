#include <stdio.h>
#include <unistd.h>

int main (void)
{
    int nombre = 0;

    printf("Choisis un nombre entier\n");
    scanf("%d", &nombre);
    
    printf("Voici ton nombre en octal %o\n", nombre);
    printf("Voici ton nombre en hexadecimal %x\n", nombre);
    
    return(0);
}