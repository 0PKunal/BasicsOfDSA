#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node == NULL) return NULL;
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

struct Node *insert(struct Node *root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

struct Node *search(struct Node *root, int key) {
    if (root == NULL || root->data == key) return root;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

int main() {
    int n, value, key;
    struct Node *root = NULL;

    printf("\nEnter number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter node values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    if (search(root, key) != NULL) printf("Found\n");
    else printf("Not found\n");

    return 0;
}
