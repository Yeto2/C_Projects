#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("enter a number between 10 and 20 : ");
    scanf("%d",&N);

    while(N<10 || N>20){
        if(N<10){
            printf(" the number is lower than 10 \n");
        }else if(N>20){
            printf(" the number is bigger than 20 \n");
        }
    printf("enter a number between 10 and 20 : ");
    scanf("%d",&N);
    }
        printf(" perfect !!");
    return 0;
}
