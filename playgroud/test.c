#include <stdio.h>
#include <math.h>

int main() {

    double x = 1.e-18; // 10^{-18}
    const double eps = 1.e-9;

    if (fabs(x) < eps) {
        printf("x == 0\n");
    } else {
        printf("x != 0\n");
        double y = 1. / x;
        printf("y = %lf\n", y);
    }

    return 0;
}
