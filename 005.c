/**************************************************************************************************************
 * Project Euler (http://projecteuler.net) - Problem 5                                                        *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. *
 *                                                                                                            *
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?          *
 **************************************************************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>

void main()
{
	int i, j, k;

	for (i = 20, k = i; i > 1; i--)
	{
		for (j = i - 1; j > 1; j--)
			if (i % j == 0)
				k  /= j;
		k *= (i - 1);
	}

	printf ("\n -- %d -- \n", k);
}
