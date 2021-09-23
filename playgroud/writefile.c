#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr = fopen("random.txt", "w");
    if (fptr == NULL) {
        puts("Can't create file\n");
        return 1;
    }

    for (int i = 0; i < 1000; ++i) {
        double x = (double)rand() / RAND_MAX;
        fprintf(fptr, "%.3lf\n", x);
    }

    fclose(fptr);

    return 0;
}