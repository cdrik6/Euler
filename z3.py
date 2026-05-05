# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600 851 475 143?
import math

def isPrime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

# def is_prime(n):
#    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))


def main():
    n = 600851475143
    for i in range(math.isqrt(n), 1, -1):
        if n % i == 0 and isPrime(i):
            return print(f"{i}")

if __name__ == "__main__":
    main()
