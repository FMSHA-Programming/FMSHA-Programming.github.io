#include <stdio.h>

int main() {
    int a = 16;

    printf("%x\n", a);
    printf("%x\n", a & a);
    printf("%x\n", a | a);
    printf("%x\n", a ^ a);

    printf("%x\n", a & ~a);
    printf("%x\n", a | ~a);
    printf("%x\n", a ^ ~a);

    printf("%x\n", ~0);

    printf("%x\n", a);
    printf("%x\n", a & ~(1 << 31));

    return 0;
}
