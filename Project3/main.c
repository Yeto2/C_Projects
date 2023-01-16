#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X , Y ;
    printf("Write The First Number : ");
    scanf("%f" , &X);
    printf("Write The Second Number : ");
    scanf("%f" , &Y);
    printf("the result is : %.2f" , pow(X,Y));
    getch();
    return 0;
}
