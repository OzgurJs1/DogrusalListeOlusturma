#include <stdio.h>
#include <stdlib.h>
//Tek Bağlı Doğrusal Liste Oluşturmak ve Eleman Ekleme
struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printf("Created Linked List: ");
    printList(head);
    return 0;
}

