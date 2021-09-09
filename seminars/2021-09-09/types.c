#include <stdio.h>

int main() {
    char ch = 'a';
    short s = 1;
    int a = -2;
    unsigned b = 2;  // unsigned int b;
    long c = -1000 * 1000 * 1000;  // long int c;
    unsigned long d = 1000 * 1000 * 1000;
    long long e = -3;
    unsigned long long f = 6;

    printf("%d\n", ch);  // 97
    printf("%d\n", s);
    printf("%d\n", a);
    printf("%u\n", b);
    printf("%ld\n", c);
    printf("%lu\n", d);
    printf("%lld\n", e);
    printf("%llu\n", f);

    return 0;
}
