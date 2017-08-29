#include <stdio.h>
#include "func.h"
#include <time.h>
#include <stdlib.h>
int check(int take)
{

	if (take > 0 && take < 11)
		return 0;
	return -1;

}

int move(int numOfRemain)
{
	if (numOfRemain < 10){
		switch(numOfRemain)
		{
			case 9:
				return getrand(1, 9);
			case 8:
				return getrand(1, 8);
			case 7:
				return getrand(1, 7);
			case 6:
				return getrand(1, 6);
			case 5:
				return getrand(1, 5);
			case 4:
				return getrand(1, 4);
			case 3:
				return getrand(1, 3);
			case 2:
				return getrand(1, 2);
			case 1:
				return 1;
		}
	}
	return getrand(1, 10);
}

int getrand(int min, int max)
{
    srand(time(NULL));
    return min + rand() % max;
}
