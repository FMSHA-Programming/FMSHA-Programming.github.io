#include <stdio.h>

void increment0(int a) {
    ++a;
}

void increment(int* a) {
    ++*a;
}

int main() {
    int value = 2;
    printf("%d\n", value);
    increment0(value);
    printf("%d\n", value);
    increment(&value);
    printf("%d\n", value);
    return 0;
}
