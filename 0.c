// Among the first 196 thousand square numbers, what is the sum of all the odd squares?
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    double sum_dbl;
    unsigned long long sum_ull;

    printf("LMAX = %ld\n", LONG_MAX);
    printf("LLMAX = %lld\n", LLONG_MAX);
    printf("ULLMAX = %llu\n", ULLONG_MAX);
    
    sum_dbl = 0;
    for (int i = 1; i <= 196000; i = i + 2)        
        sum_dbl = sum_dbl + (double)(i) * (double)(i);
    printf("sum_dbl = %f\n", sum_dbl);

    sum_ull = 0;
    for (int i = 1; i <= 196000; i = i + 2)
        sum_ull = sum_ull + (unsigned long long)i * (unsigned long long)i; // si pas de cast c'est faux !
        //  sum_ull = sum_ull + (unsigned long long)i * i; suffit
    printf("sum_ull = %llu\n", sum_ull);

    return (0);
}