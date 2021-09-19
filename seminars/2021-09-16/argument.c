#include <stdio.h>

void increment(int a) {
    ++a;
}

int main() {
    int value = 2;
    printf("%d ", value);
    increment(value);
    printf("%d\n", value);
    return 0;
}
