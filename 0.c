// Among the first 724 thousand square numbers, what is the sum of all the odd squares?
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    unsigned long long sum;

    printf("LMAX = %ld\n", LONG_MAX);
    printf("LLMAX = %lld\n", LLONG_MAX);
    printf("ULLMAX = %llu\n", ULLONG_MAX);
    sum = 0;
    for (int i = 0; i <= 724000; i++)
        if (i % 2 != 0)
            sum = sum + i * i;
    printf("sum = %llu\n", sum);
    return (0);
}