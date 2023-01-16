#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Se ,H , M , S , R;
    printf("write Seconds : ");
    scanf("%d" , &Se);

    H = Se / 3600;
     R = Se % 3600;
    M = R / 60;
    S = Se % 60;
    printf("Hours : %d \n" , H);
    printf("Minutes : %d \n" , M);
    printf("Seconds : %d \n" , S);
    return 0;
}
