#include <stdio.h>

int main() {
    FILE* fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        puts("Can't open file\n");
        return 1;
    }

    int n;
    while (!feof(fptr)) {
        fscanf(fptr, "%d", &n);
        printf("%d ", n);
    }
    putchar('\n');
    fclose(fptr);

    return 0;
}
