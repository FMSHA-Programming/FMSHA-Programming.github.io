#include <stdio.h>
#include <math.h>

size_t dividers(size_t n, size_t div[]) {
    size_t numdiv = 0;
    int maxdiv = sqrt(n);
    for (size_t i = 1; i < maxdiv; ++i) {
        if (!(n % i)) {
            div[numdiv++] = i;
            div[numdiv++] = n / i;
        }
    }
    return numdiv;
}

int main() {
    const size_t n = 10;
    size_t divs[n];
    size_t ndivs = dividers(n, divs);
    for (size_t i = 0; i < ndivs; ++i) {
        printf("%ld ", divs[i]);
    }
    printf("\n");
    return 0;
}
