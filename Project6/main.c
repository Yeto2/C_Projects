#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float r , v;
    const float pi = 3.14;
    printf("Taper le rayon d'une sph�re :");
    scanf("%f" , &r);

    v = 4*pi*pow(r,3)/3;
    printf("le Volume d'une sph�re : %.1f" , v);
    return 0;
}
