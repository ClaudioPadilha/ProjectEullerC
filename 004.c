/*****************************************************************************************************************************************
 * Project Euler (http://projecteuler.net) - Problem 4                                                                                   *
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. *
 *                                                                                                                                       *
 * Find the largest palindrome made from the product of two 3-digit numbers.                                                             *
 *****************************************************************************************************************************************/

# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int palindromo (int n)
{
	int i, j, k, l;
	
	for (i = 1; ; i*=10)
		if (n%i == n) break;

	for (j = 10, i/=10; j <= i; j*=10, i/=10)
		if ((n/i)%10 != n%j*10/j) return 0;

       	return 1;
}

void main()
{
	int i, j, k = 0;

	for (i = 999; i > 99; i--)
		for (j = i; j > 99; j--)
			if (palindromo (i * j) && k < i * j) k = i * j;

	printf ("\n -- %d -- \n", k); 
}
