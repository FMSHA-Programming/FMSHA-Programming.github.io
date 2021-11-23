#include <stdio.h>


typedef struct {
    int value;
    struct ListNode* next;
} ListNode;

typedef struct {
    size_t size;
    ListNode* head;
    ListNode* tail;
} List;

List init_list() {
    List l = {0, NULL, NULL};
    return l;
}

int main() {
    List l = init_list();
    return 0;
}
