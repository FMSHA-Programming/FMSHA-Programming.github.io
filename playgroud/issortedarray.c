#include <stdio.h>

int main() {
    double arr[] = {1.2, -0.6, 3.4, 9.9, 4.3};
    size_t size = 5;

    int is_sorted = check_sorted(arr, size);
    if (is_sorted) {
        printf("Array is sorted\n");
    } else {
        printf("Array is not sorted\n");
    }
    return 0;
}
