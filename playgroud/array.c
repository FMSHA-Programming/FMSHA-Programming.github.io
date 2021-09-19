#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; ++i)
        arr[i] = i;
    for (int i = 0; i < size; ++i)
        printf("%d%c", arr[i], i + 1 == size ? '\n' : ' ');
    return 0;
}
