#include <stdio.h>
#include <time.h>
#include <stdlib.h>

long long fibb(int n) {
    long long a = 0;
    long long b = 1;
    for (int i = 0; i < n; ++i) {
        long long tmp = a;
        a = b;
        b = tmp + b;
    }
    return b;
}

long long fibb_bad(int n) {
    if (n < 2) return 1;
    return fibb_bad(n - 1) + fibb_bad(n - 2);
}

int main() {
    FILE* fptr = fopen("numbers.txt", "r");
    if (fptr == NULL) {
        printf("Can't open file :(\n");
        return 1;
    }

    char line[100];
    int value;
    while(!feof(fptr)) {
        fscanf(fptr, "%s %d\n", line, &value);
        // getline(line, 100, fptr);
        // printf("%s -> %d\n", line, value);
        printf("%s\n", line);
    }

    fclose(fptr);

    return 0;
}
