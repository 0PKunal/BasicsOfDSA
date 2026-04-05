#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *insertAtEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return head;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node *deleteAtPosition(struct Node *head, int pos) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return head;
    }

    if (pos == 0) {
        struct Node *toDelete = head;
        head = head->next;
        free(toDelete);
        return head;
    }

    struct Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position.\n");
        return head;
    }

    struct Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    return head;
}

void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, value, pos;
    struct Node *head = NULL;

    printf("\nEnter the size of the linked list: ");
    scanf("%d", &n);

    printf("\nEnter the values of the linked list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        head = insertAtEnd(head, value);
    }

    printf("\nInputted integers: ");
    display(head);

    printf("\nEnter the position to delete the element: ");
    scanf("%d", &pos);

    head = deleteAtPosition(head, pos);

    printf("\nLinked list after deletion: ");
    display(head);

    return 0;
}
