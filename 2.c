// By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//  find the sum of the even-valued terms.
#include <stdio.h>

// int f(int n)
int main()
{
	unsigned int a = 1;
	unsigned int b = 2;	
	unsigned int f = 3;
	unsigned long long s = 2;

	while (f <= 4000000)
	{
		f = a + b;
		if (f % 2 == 0)
			s += f;
		a = b;
		b = f;
	}
	printf("sum = %llu\n", s);
}