#include <stdio.h>
#include <math.h>

int find_divisors(int n, int divisors[]) {
    int ndivs = 0;
    int maxval = sqrt(n);
    for (int a = 1; a <= maxval; ++a) {
        if (n % a == 0) {
            divisors[ndivs++] = a;
            if (a != n / a)
                divisors[ndivs++] = n / a;
        }
    }

    return ndivs;
}

int main() {
    int a;
    scanf("%d", &a);
    int divs[a];
    int ndivs = find_divisors(a, divs);
    printf("%d divisors found\n", ndivs);
    for (int i = 0; i < ndivs; ++i) {
        printf("%d ", divs[i]);
    }
    putchar('\n');
    return 0;
}
