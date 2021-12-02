#include <stdlib.h>
#include <stdio.h>



struct ListNode {
    int value;
    struct ListNode *next;
};
typedef struct ListNode ListNode;

typedef struct {
    size_t size;
    ListNode* head;
    ListNode* tail;
} List;

List init_list() {
    List l = {0, NULL, NULL};
    return l;
}

// Создание элемента списка
ListNode* init_listnode(int value, ListNode* next) {
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
    newnode->value = value;
    newnode->next = next;
    return newnode;
}

// Вставка элемента после данного
void listnode_insert_next(ListNode* node, int value) {
    ListNode* current_next = node->next;
    ListNode* newnode = init_listnode(value, current_next);
    node->next = newnode;
}

// Удаление элемента, следующего за данным
void listnode_remove_next(ListNode* node) {
    if (node == NULL || node->next == NULL) return;
    ListNode* current_next = node->next;
    node->next = node->next->next;
    free(current_next);
}

// Вывод в консоль всех значений элементов, начинася с данного
void listnode_print(ListNode* node) {
    while (node != NULL) {
        printf("%d%s", node->value, node->next == NULL ? "\n" : " -> ");
        node = node->next;
    }
}

// Вставка элемента в начало списка
void list_push_front(List* l, int value) {
    ListNode* new_head = init_listnode(value, l->head);
    l->head = new_head;
    if (!l->size) l->tail = new_head;
    ++l->size;
}

// Вставка элемента в конец списка
void list_push_back(List* l, int value) {
    // Реализуйте эту функцию самостоятельно
}

// Вывод всех значений списка в стандартный поток вывода
void list_print(List* l) {
    if (l == NULL) return;
    listnode_print(l->head);
}

// Удаление первого элемента и возвращение его значения
int list_pop_front(List* l) {
    if (l == NULL || !l->size) return 0;
    ListNode* current_head = l->head;
    int value = current_head == NULL ? 0 : current_head->value;
    l->head = l->head->next;
    free(current_head);
    if (!--l->size) l->tail = NULL;
    return value;
}

// Поиск первого элемента списка с данным значением.
// Функция возвращает указатель на найденный элемент.
// Функция возвращает NULL, если элемент не найден
ListNode* list_find(List* l, int value) {
    if (l == NULL) return NULL;
    ListNode* node = l->head;
    while (node != NULL) {
        if (node->value == value) return node;
        node = node->next;
    }
    return NULL;
}

// Обмен местами двух элементов списка
void list_swap(ListNode* node1, ListNode* node2) {
    // Реализуйте эту функцию самостоятельно
}

