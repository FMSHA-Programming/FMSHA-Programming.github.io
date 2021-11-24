#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int value;
    struct ListNode *next;
};

typedef struct ListNode ListNode;

void listnode_remove_next(ListNode* node) {
    if (node == NULL || node->next == NULL) return;
    ListNode* current_next = node->next;
    node->next = node->next->next;
    free(current_next);
}

ListNode* init_listnode(int value, ListNode* next) {
    ListNode* newnode = malloc(sizeof(ListNode));
    newnode->value = value;
    newnode->next = next;
    return newnode;
}

void listnode_insert_next(ListNode* node, int value) {
    ListNode* current_next = node->next;
    ListNode* newnode = init_listnode(value, current_next);
    node->next = newnode;
}

void listnode_print(ListNode* node) {
    while (node != NULL) {
        printf("%d%s", node->value, node->next == NULL ? "\n" : " -> ");
        node = node->next;
    }
}

typedef struct {
    ListNode *head;
    ListNode *tail;
    size_t size;
} LinkedList;

LinkedList list_init() {
    LinkedList l = {NULL, NULL, 0};
    return l;
}

void list_push_front(LinkedList* l, int value) {
    ListNode* new_head = init_listnode(value, l->head);
    l->head = new_head;
    if (!l->size) l->tail = new_head;
    ++l->size;
}

void list_push_back(LinkedList* l, int value) {
    // TODO
}

void list_print(LinkedList* l) {
    if (l == NULL) return;
    listnode_print(l->head);
}

int list_pop_front(LinkedList* l) {
    if (l == NULL || !l->size) return 0;
    ListNode* current_head = l->head;
    int value = current_head == NULL ? 0 : current_head->value;
    l->head = l->head->next;
    free(current_head);
    if (!--l->size) l->tail = NULL;
    return value;
}

ListNode* list_find(LinkedList* l, int value) {
    if (l == NULL) return NULL;
    ListNode* node = l->head;
    while (node != NULL) {
        if (node->value == value) return node;
        node = node->next;
    }
    return NULL;
}

int main() {
    LinkedList l = list_init();
    for (int i = 1; i < 10; ++i) {
        list_push_front(&l, i * i);
    }
    list_print(&l);

    for (int i = 1; i < 3; ++i) {
        list_pop_front(&l);
    }
    list_print(&l);
    return 0;
}
