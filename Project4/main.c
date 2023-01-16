#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b;
    printf("write the numbers a and b :");
    scanf("%f %f" , &a ,&b);

    printf("%.0f + %.0f = %.0f \n" , a,b,a+b);
    printf("%.0f - %.0f = %.0f \n" , a,b,a-b);
    printf("%.0f / %.0f = %.0f \n" , a,b,a/b);
    printf("%.0f * %.0f = %.0f \n" , a,b,a*b);


    return 0;
}
