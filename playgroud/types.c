#include <stdio.h>

int main() {
    char ch;
    char s[100];
    printf("Enter a char: ");
    scanf("%c", &ch);
    printf("Enter a string: ");
    scanf("%s", s);
    printf("%c\n", ch);
    printf("%s", s);

    return 0;
}
