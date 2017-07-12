#include <stdio.h>
#include "func.h"
#include <time.h>
#include <stdlib.h>
int check(int take)
{

	if (take < 10 && take > 0)

	    return 1;
	else return 0;

}

int move(int numOfRemain)
{
    if (1 < numOfRemain && numOfRemain <= 10){
        return numOfRemain - 1;
    }
    if (11 < numOfRemain && numOfRemain <= 20){
        return numOfRemain - 11;
    }
    if (21 < numOfRemain && numOfRemain <= 30){
        return numOfRemain - 21;
    }
    if (31 < numOfRemain && numOfRemain <= 40){
        return numOfRemain - 21;
    }
    if (41 < numOfRemain && numOfRemain <= 50){
        return numOfRemain - 41;
    }
    if (51 < numOfRemain && numOfRemain <= 60){
        return numOfRemain - 51;
    }
    if (61 < numOfRemain && numOfRemain <= 70){
        return numOfRemain - 61;
    }
    if (71 < numOfRemain && numOfRemain <= 80){
        return numOfRemain - 71;
    }
    if (81 < numOfRemain && numOfRemain <= 90){
        return numOfRemain - 81;
    }
    if (91 < numOfRemain && numOfRemain <= 100){
        return numOfRemain - 91;
    }
    if (numOfRemain % 10 == 1){
        return getrand(1, 10);
    }
    return 0;
}


