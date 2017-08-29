#include "func.h"
#include <ctest.h>
CTEST(check_input_data, good)
{
	const int  result = check(6);
	const int  expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data, bad)
{
	const int  result = check(13);
	const int  expected = -1;
	ASSERT_EQUAL(expected, result);
}
