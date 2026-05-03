// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600 851 475 143?

function isPrime(n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (let i = 3; i * i <= n; i = i + 2)
        if (n % i == 0)
            return false;
    return true;
}

function getPrimest()
{
    const n = 600851475143;

    for (let i = Math.floor(Math.sqrt(n)); i > 0; i--)
    {
        if (n % i == 0 && isPrime(i))
            return i;
    }
}

console.log(getPrimest());
