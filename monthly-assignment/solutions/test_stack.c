#include <stdio.h>
#include "stack.h"

int main() {
    Stack* st = init_stack();
    for (int i = 0; i < 1000; ++i) {
        put_stack(st, i);
    }

    for (int i = 0; i < 1000; ++i) {
        int val = pop_stack(st);
        printf("%d\n", val);
    }

    free_stack(st);

    return 0;
}
