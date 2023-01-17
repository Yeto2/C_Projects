#include <stdio.h>
#include <stdlib.h>

int main()
{
    //-------- Rectangle --------
    int C , L , i , j;
    printf("write number of lines : ");
    scanf("%d", &L);
    printf("write number of columns : ");
    scanf("%d", &C);

    for(i=1 ; i<=L ; i++){
        for(j=1  ; j<=C ; j++){
        printf("* ");
        }
        printf("\n");
    }
    //---------Triangle---------
    int L , i , j;
    printf("write number of lines : ");
    scanf("%d", &L);

    for(i=0 ; i<=L ; i++){
        for(j=1  ; j<=i ; j++){
        printf("* ");
        }
        printf("\n");
    }



    return 0;
}

