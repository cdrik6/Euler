// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600 851 475 143?
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int is_prime(long n)
{
    if (n <= 1)
        return (0);
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return (1);
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return (0);    
    for (long i = 11; i <= (long)floor(sqrt((double)n)); i++)    
        if (n % i == 0)
            return (0);
    return (1);
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;    
    long n = 600851475143;
    // printf("%ld\n", (long)floor(sqrt((double)n)));
    
    for (long i = (long)floor(sqrt((double)n)); i > 0; i--)
    {
        if (n % i == 0 && is_prime(i))
            return (printf("%ld\n", i));
    }
}
