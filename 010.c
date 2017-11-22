/*********************************************************
 * Project Euler (http://projecteuler.net) - Problem 10  *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. *
 *                                                       *
 * Find the sum of all the primes below two million.     *
 *********************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <time.h>
# define n 2000000 

void main()
{
	int i, j = 1, k, p[n];
	long int l;
	clock_t inicio, fim;

	inicio = clock ();

	p[0] = l = 2;

	for (i = 3; i < n; i+=2)
	{
		for (k = 0; k < j; k++)
			if (i % p[k] == 0) break;
		
		if (k == j) 
		{
			p[j++] = i;
			l += i;
		}
	}

	fim = clock();
	printf ("\n -- %ld -- %f \n", l, (double)(fim - inicio)/CLOCKS_PER_SEC);

}
