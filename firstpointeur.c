#include<stdio.h>

void ft_inverse_nb(int *pt_nba,int *pt_nbb)
{
    int temporaire = 0;
    temporaire = *pt_nbb;
    *pt_nbb = *pt_nba;
    *pt_nba = temporaire;
}
int main()
{
    int nba;
    int nbb;
    nba = 6;
    nbb = 3;
    int *pt_nba = &nbb;
    int *pt_nbb = &nba;
 
    printf("le nombrea est %d le nomnre b est %d\n", nba , nbb);
    ft_inverse_nb( &nba, &nbb);
    printf("après ma fonction le nombre a est %p le nombre b est %p \n", *pt_nba, *pt_nbb);


}