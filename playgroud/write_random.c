#include <stdio.h>
#include <stdlib.h>

void fill_n_random(int arr[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        *(arr + i) = (rand() % 2000) - 1000;
    }
}

void write_n_numbers(int arr[], size_t n, char fname[]) {
    FILE* fptr = fopen(fname, "w");
    for (size_t i = 0; i < n; ++i) {
        fprintf(fptr, "%d\n", arr[i]);
    }
    fclose(fptr);
}

void read_n_numbers(int arr[], size_t nmax, char fname[]) {
    
}

int main() {
    int array[100];
    fill_n_random(array, 100);
    for (size_t i = 0; i < 100; ++i) {
        printf("%d ", *(array + i));
    }
    putchar('\n');

    write_n_numbers(array, 100, "numbers.txt");
    return 0;
}
