#include<stdio.h>

 int addition(int nb,int nb1)

{
    if ( nb < 0 || nb1 < 0 );
        return 0;
    {   
        int result = nb + nb1;
            return result;
    }   
    

 }

 int main()

 {
    int nb , nb1, result;

    printf("Choisis deux chiffres\n");
    scanf("%d %d", &nb, &nb1);
    result = addition(nb, nb1);
    printf("Le resultat est : %d\n", result);
    return 0;

 }
