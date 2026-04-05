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

void inorder(struct Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    int n, value;
    struct Node *root = NULL;

    printf("\nEnter number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter node values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\n");

    return 0;
}
