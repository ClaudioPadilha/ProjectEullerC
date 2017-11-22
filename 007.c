/********************************************************************************************************
 * Project Euler (http://projecteuler.net) - Problem 7                                                  *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. *
 *                                                                                                      *
 * What is the 10 001st prime number?                                                                   *
 ********************************************************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <time.h>
# define n 10001

void main()
{
	int i, j = 0, k, p[n];
	clock_t inicio, fim;

	inicio = clock ();

	for (i = 2; j < n; i++)
	{
		for (k = 0; k < j; k++)
			if (i % p[k] == 0) break;
		
		if (k == j) p[j++] = i;
	}

	fim = clock();
	printf ("\n -- %d -- %f \n", i - 1, (double)(fim - inicio)/CLOCKS_PER_SEC);
}
