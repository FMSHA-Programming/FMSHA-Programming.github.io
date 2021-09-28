#include <stdio.h>

size_t array_size(int arr[]) {
    return sizeof(arr) / sizeof(int);
}

size_t string_size(char line[]) {
    return sizeof(line) / sizeof(int);
}

int main() {
    char line[] = "Hello!";
    printf("%s\n", line);
    printf("%ld\n", sizeof(line) / sizeof(char));
    printf("%ld\n", string_size(line));

    // char line2[100];
    // scanf("%s", line2);
    // printf("%s\n", line2);

    // for (size_t i = 0; i < 10; ++i) {
    //     putchar(line2[i]);
    //     putchar(' ');
    // }
    // putchar('\n');

    int notempty[9];
    printf("%ld\n", sizeof(notempty) / sizeof(int));
    printf("%ld\n", array_size(notempty));

    char line1[] = "Avenue";
    char ch = 'd';

    printf("%f %d", line1, ch);
    printf("%s %c\n", line1, ch);
    printf("%s %d\n", line1, ch);

    return 0;
}
