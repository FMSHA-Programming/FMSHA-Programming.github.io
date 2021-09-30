#include <stdio.h>

int main() {
    char line[100];
    scanf("%100s", line);
    printf("%ld\n", sizeof(line) / sizeof(char));
    printf("%s\n", line);

    for (size_t i = 0; i < 100; ++i) {
        if (line[i] == '\0') {
            printf("Index %lu\n", i);
            break;
        }
    }
    return 0;
}
