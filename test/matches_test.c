#include <ctest.h>
#include "func.h"

CTEST(numOfRemain, test1)
{
	const int numOfRemain = 7;
	const int result = move(numOfRemain);
	const int expected1 = 1;
	const int expected2 = 7;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(numOfRemain, test2)
{
	const int numOfRemain = 3;
	const int result = move(numOfRemain);
	const int expected1 = 1;
	const int expected2 = 3;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(numOfRemain, test3)
{
	const int numOfRemain = 28;
	const int result = move(numOfRemain);
	const int expected1 = 1;
	const int expected2 = 28;
	ASSERT_INTERVAL(expected1, expected2, result);
}


