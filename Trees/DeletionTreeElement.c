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

struct Node *minValueNode(struct Node *node) {
    struct Node *current = node;
    while (current && current->left != NULL) current = current->left;
    return current;
}

struct Node *deleteNode(struct Node *root, int key) {
    if (root == NULL) return root;

    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            struct Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        struct Node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(struct Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
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

    printf("\nEnter value to delete: ");
    scanf("%d", &key);
    root = deleteNode(root, key);

    printf("\nTree after deletion (inorder): ");
    inorder(root);
    printf("\n");

    return 0;
}
