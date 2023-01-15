#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yearOfToday = 2023 ;
    printf("write year of birth!\n");
    int yearOfBirth ;
    scanf("%d",&yearOfBirth);

    printf("Your age is : %d Yo\n" ,yearOfToday - yearOfBirth);

    return 0;
}
