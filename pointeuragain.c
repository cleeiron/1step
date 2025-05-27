#include <stdio.h>

int notes[3];
    void calculer_moyenne(int*notes,float*moyenne)
{ 
    *moyenne = (notes[0] + notes [1] + notes[2])/ 3.0;
}
    
    int *trouver_max(int *notes) 
{
    int *max =&notes[0];
        if (notes[1]>*max)
        *max = notes[1];
        if (notes[2]>*max)
        *max = notes[2];
        return max;
}
int main() 
{

    float moyenne;
    int *maxNote;

    printf("Donne moi tes 3 notes de Math :\n");
    scanf("%d %d %d", &notes[0], &notes[1], &notes[2]);

    calculer_moyenne(notes, &moyenne);
    maxNote = trouver_max(notes);

    printf("Les notes : %d, %d, %d\n", notes[0], notes[1], notes[2]);
    printf("Moyenne : %.2f\n", moyenne);
    printf("Note maximale : %d\n", *maxNote);

    return 0;
}