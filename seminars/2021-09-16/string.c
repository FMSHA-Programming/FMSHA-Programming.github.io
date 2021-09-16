#include <stdio.h>

int main() {
    char s1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char s2[] = "Hello";

    printf("%s\n%s\n", s1, s2);

    printf("What is your name?\n");
    char s3[15];
    scanf("%s", s3);
    printf("Hello, %s\n", s3);

    return 0;
}