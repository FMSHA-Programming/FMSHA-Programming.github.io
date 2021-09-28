#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void init_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i;
    }
}

int main() {
    // int arr[4];
    // init_array(arr, 4);
    // print_array(arr, 4);

    int* arr2 = make_array();
    print_array(arr2, 10);
    return 0;
}
