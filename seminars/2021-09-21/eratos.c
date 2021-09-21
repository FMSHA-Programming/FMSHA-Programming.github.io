#include <stdio.h>

size_t sieve(size_t n, size_t primes[]) {
    size_t nprimes = 0;
    size_t next_prime = 0;
    int sieve[n];
    for (size_t i = 0; i < 3; ++i) sieve[i] = 0;
    for (size_t i = 3; i < n; ++i) sieve[i] = 1;

    size_t p = 2;
    while (next_prime < n) {
        for (size_t i = p; i < n; i += p)
            sieve[i] = 0;
        while (!sieve[++next_prime] && next_prime < n) {}
        if (next_prime != n)
            primes[nprimes++] = next_prime;
        p = next_prime;
    }
    return nprimes;
}

int main() {
    size_t n;
    printf("Type an integer number\n");
    scanf("%ld", &n);
    size_t primes[n];
    size_t nprimes = sieve(n , primes);
    for (size_t i = 0; i < nprimes; ++i)
        printf("%ld ", primes[i]);
    putchar('\n');
    return 0;
}
