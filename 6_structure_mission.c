#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
}
Node;

void pre_append(Node* head, int data);
void append(Node* head, int data);
int getLastNode(Node* head, int k);
void printList(Node* head);

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    append(head, 9);
    append(head, 8);
    append(head, 4);
    append(head, 14);
    append(head, 5);
    printList(head);
    printf("\n%dth last node is %d\n", 2, getLastNode(head, 2));
    free(head);
    return 0;
}
void pre_append(Node* head, int data) {
    Node* pNode = malloc(sizeof(Node));
    pNode->data = data;
    pNode->next = head->next;
    head->next = pNode;
}
void append(Node* head, int data) {
    Node* curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    pre_append(curr, data);
}
int getLastNode(Node* head, int k) {
    Node* front, * end;
    front = end = head;
    int i = 0;
    for (int i = 0; i < k; i++){
        end = end->next;
        if (end == NULL) return front->data;
    }
    while (end != NULL) {
        end = end->next;
        front = front->next;
    }
    return front->data;
}
void printList(Node* head) {
    if (head == NULL)
        printf("Empty");
        
    for (Node *curr = head->next; curr != NULL; curr = curr->next)
    {
        printf("%d  ", curr->data);
    }
    printf("\n");
}