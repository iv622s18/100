#include <stdio.h>
#include "func.h"
#include <ctype.h>

int main ()
{
	int player = 1, take, numOfRemain = 100;
	printf ("Your turn. %d matches left \n", numOfRemain);
	for (;numOfRemain > 0;){
		printf ("Enter how many matches you take: ");
		if (scanf("%d", &take) == 1){
			for (;check(take) != 0 ;){
				printf ("Enter a number from 1 to 10\n");
				scanf("%d", &take);
			}
		}
		else {
			for (;scanf("%d", &take) != 1 || check(take) != 0;)
				printf("Enter a number from 1 to 10 \n");
		}
		numOfRemain -= take;
		player++;
		printf ("%d matches left \n", numOfRemain);
		if (numOfRemain > 0){
			take = move(numOfRemain);
			numOfRemain -= take;
			player++;
			printf ("Computer take %d matches\n", take);
			printf ("%d matches left \n\n", numOfRemain);
		}
	}
	if (player % 2 == 0){
		printf ("Loss!\n");
	} else {
		printf( "Victory!\n");
	}
	return 0;
}
