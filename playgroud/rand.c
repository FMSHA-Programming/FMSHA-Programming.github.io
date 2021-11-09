#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    printf("%ld\n", RAND_MAX);
    printf("%ld\n", 1l << 31);
    float N = 1000000.;
    printf("%lf\n", log2f(N));
    return 0;
}
