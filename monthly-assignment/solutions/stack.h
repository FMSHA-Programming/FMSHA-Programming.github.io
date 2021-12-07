#include <stdlib.h>

#define INIT_SIZE 4
typedef int Data;

typedef struct {
    Data* data;
    size_t size;
    size_t capacity;
} Stack;

Stack* init_stack() {
    Stack* st = (Stack*)malloc(sizeof(Stack));
    st->capacity = INIT_SIZE;
    st->data = (Data*)malloc(st->capacity * sizeof(Data));
    st->size = 0;
    return st;
}

int pop_stack(Stack* st) {
    if (st->size == 0) {
        puts("Pop from empty stack\n");
        return 0;
    }
    if (st->size > 4 && 4 * st->size == st->capacity) {
        st->capacity /= 2;
        st->data = (Data*)realloc(st->data, st->capacity * sizeof(Data));
    }
    return st->data[--st->size];
}

int top_stack(Stack *st) {
    return st->data[st->size - 1];
}

void put_stack(Stack *st, int value) {
    if (st->size == st->capacity) {
        st->capacity *= 2;
        st->data = (int*)realloc(st->data, st->capacity * sizeof(int));
        if (st->data == NULL) {
            puts("Can't allocate memory\n");
            exit(1);
        }
    }
    st->data[st->size++] = value;
}

void free_stack(Stack* st) {
    free(st->data);
    free(st);
}
