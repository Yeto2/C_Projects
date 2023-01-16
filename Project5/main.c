#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,N4,N5,S,M;
    printf("write the 5 exam marks\n");
    scanf("%f %f %f %f %f" , &N1,&N2,&N3,&N4,&N5);
    S = N1+N2+N3+N4+N5;
    M = S / 5;

    printf("Total points is : %.2f \n" , S);
    printf("the average : %.2f \n" , M);
    return 0;
}
