#include <stdio.h>
#define maxMatches 100
#include "func.h"
#include <ctype.h>

int main ()
{
    int player = 1, ost, take;
    ost = maxMatches;


    printf ("Your turn. %d matches left \n", ost);
    for (;ost > 0;){
        printf ("How many matches you take? \n");
        if (scanf("%d", &take) == 1){
            for (;check(take) != 1 ;){
                printf ("Enter a number from 1 to 10\n");
                scanf("%d", &take);
            }
        }
        else {
            for (;scanf("%d", &take) != 1 || check(take) != 1;){
                scanf("%*[^\n]");
                printf("Enter a number from 1 to 10 \n");
            }
        }
        ost = ost - take;
        player = player + 1;
        printf ("%d matches left \n", ost);

    if (ost > 0){
        take = move(ost);
        ost = ost - take;
        player = player + 1;
        printf ("Computer made its move\n");
        printf ("%d matches left \n\n", ost);
    }
}

    if (player % 2 == 0){
        printf ("Victory!\n");
    } else {
        printf( "Loss!\n");
    }
    return 0;
}
