/****************************************************************************************************************************************
 * Project Euler (http://projecteuler.net) - Problem 6                                                                                  *
 * The sum of the squares of the first ten natural numbers is,                                                                          *
 *                                                                                                                                      *
 * 1^2 + 2^2 + ... + 10^2 = 385                                                                                                         *
 * The square of the sum of the first ten natural numbers is,                                                                           *
 *                                                                                                                                      *
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025                                                                                                   *
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640. *
 *                                                                                                                                      *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.               *
 ****************************************************************************************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# define n 100

void main()
{
	int i, j, k = 0;

	for (i = 1; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			k += i * j;

	printf ("\n -- %d -- \n", 2 * k);
}
