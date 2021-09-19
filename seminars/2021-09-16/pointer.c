#include <stdio.h>

int main() {
    int a = 1;
    // int b = 2;
    int c = 3;

    printf("%x %d\n", &a, a);
    // printf("%x %d\n", &b, b);
    printf("%x %d\n", &c, c);

    double x = 1;
    double y = 2;
    double z = 3;

    printf("%x %lf\n", &x, x);
    printf("%x %lf\n", &y, y);
    printf("%x %lf\n", &z, z);

    a = 5;
    int *ptr = &a;
    int b = *ptr;
    printf("%d %d %d\n", a, *ptr, b);
    printf("%x %x %x\n", &a, ptr, &b);
    printf("%x\n", &ptr);


    int value = 6;
    int *vptr = &value;
    *vptr = 11;
    printf("value = %d\n", value);
    return 0;
}
