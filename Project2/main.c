#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur , longeur , P , S;
    printf("largeur :");
    scanf("%f",&largeur);
    printf("longeur :");
    scanf("%f",&longeur);
    P = (largeur + longeur)* 2 ;
    S =  largeur * longeur ;
    printf("la Périmètre est : %.2f \n" , P);
    printf("la Surface est : %.2f \n" , S);
    return 0;
}
