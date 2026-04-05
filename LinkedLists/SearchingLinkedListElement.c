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

void search(struct Node *head, int key) {
    int index = 0;
    struct Node *temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Found at node index %d\n", index);
            return;
        }
        temp = temp->next;
        index++;
    }

    printf("Not found\n");
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
    int n, value, key;
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

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    search(head, key);

    return 0;
}
