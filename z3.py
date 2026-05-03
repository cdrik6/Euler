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
    for i in range(math.sqrt(n)):
        if n % i == 0:
            return False
    return True

def main():
    print





if __name__ == "__main__":
    main()
