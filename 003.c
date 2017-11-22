/*****************************************************************
 * Project Euler (http://projecteuler.net) - Problem 3           *
 * The prime factors of 13195 are 5, 7, 13 and 29.               *
 *                                                               *
 * What is the largest prime factor of the number 600851475143 ? *
 *****************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>

void main()
{
	int i, j;
	long int n = 600851475143; 

	for (i = 2; ; i++)
	{
		for (j = i - 1; j > 1; j--)
			if (i%j == 0) break;

		if (j == 1)
			while (n%i == 0) n = n / i;
		
		if (n == 1) break;
	}

	printf ("\n\n ----- %d ------ \n\n", i);
}
