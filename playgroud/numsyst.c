#include <stdio.h>

void swap(int arr[], size_t i, size_t j) {
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[j] ^ arr[i];
    arr[i] = arr[i] ^ arr[j];
}

void reverce(int arr[], size_t lo, size_t hi) {
    while (lo < hi) swap(arr, lo++, hi--);
}

void init_zeros(int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) arr[i] = 0;
}

size_t decimal_to_qsystem(long int a, unsigned q, int aq[]) {
    size_t i = 0;
    while (a) {
        aq[i++] = a % q;
        a /= q;
    }
    reverce(aq, 0, i - 1);
    return i;
}

int main() {
    long int value = 1233567;
    int aq[100];
    init_zeros(aq, 100);
    size_t ndigits = decimal_to_qsystem(value, 7, aq);
    for (size_t i = 0; i < ndigits; ++i) {
        printf("%d", aq[i]);
    }
    putchar('\n');
    return 0;
}
