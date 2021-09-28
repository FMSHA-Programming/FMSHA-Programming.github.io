#include <stdio.h>

int main() {
    int scores[] = {5, 7, 6, 8, 9, 9, 6, 8, 6, 8, 7, 7, 7};
    // 0, 1, ..., 10
    int hist[11];
    for (int i = 0; i < 11; ++i) hist[i] = 0;

    for (int i = 0; i < 13; ++i) {
        ++hist[scores[i]];
    }

    for (int i = 0; i < 11; ++i) {
        printf("%2d %2d ", i, hist[i]);
        for (int j = 0; j < hist[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}