#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} Stack;

void put_stack(Stack *st, int value) {
    if (st->size == st->capacity) {
        st->capacity *= 2;
        printf("New capacity %lu\n", st->capacity);
        st->data = (int*)realloc(st->data, st->capacity * sizeof(int));
        if (st->data == NULL) {
            puts("Can't allocate memory\n");
            exit(1);
        }
    }
    st->data[st->size] = value;
    ++st->size;
}

int pop_stack(Stack* st) {
    if (st->size == 0) {
        puts("Pop from empty stack\n");
        return 0;
    }
    if (st->size > 4 && 4 * st->size == st->capacity) {
        st->capacity /= 2;
        printf("New capacity %lu\n", st->capacity);
        st->data = (int*)realloc(st->data, st->capacity * sizeof(int));
    }
    return st->data[--st->size];
}

Stack* init_stack() {
    Stack* st = (Stack*)malloc(sizeof(Stack));
    st->capacity = 4;
    st->data = (int*)malloc(st->capacity * sizeof(int));
    st->size = 0;
    return st;
}

void free_stack(Stack* st) {
    free(st->data);
    free(st);
}

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
