#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , C;
    printf("write number A :");
    scanf("%f" ,&A);
    printf("write number B :");
    scanf("%f" ,&B);
    printf("old values : A = %.0f <----> B = %.0f \n", A,B);
    C=A;
    A=B;
    B=C;
    printf("New values : A = %.0f <----> B = %.0f ", A,B);
    return 0;
}
