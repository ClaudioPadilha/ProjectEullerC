/**********************************************************************************
 * Project Euler (http://projecteuler.net) - Problem 9                            *
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, *
 *                                                                                *
 * a^2 + b^2 = c^2                                                                *
 *                                                                                *
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.                                    *
 *                                                                                *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.       *
 * Find the product abc.                                                          *
 **********************************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <time.h>
# define n 1000

void main()
{
	int a, b;

	for (a = 0; a < n; a++)
		for (b = a + 1; b < n; b++)
			if (((a * a + b* b) == (n - a - b) * (n - a - b)) && ((n - a - b) > b))
			{
				printf ("\n %d \n", a * b * (n - a - b));
				exit (0);
			}
}
