Value added statement 1
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* newNode(int val) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int val) {
    if (root == NULL) return newNode(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void printRange(struct node* root, int low, int high) {
    if (root == NULL) return;

    if (root->data > low)
        printRange(root->left, low, high);

    if (root->data >= low && root->data <= high)
        printf("%d ", root->data);

    if (root->data < high)
        printRange(root->right, low, high);
}

int main() {
    struct node* root = NULL;

    root = insert(root, 10);
    insert(root, 5);
    insert(root, 1);
    insert(root, 7);
    insert(root, 40);
    insert(root, 50);

    int low = 5, high = 45;
    printf("Tanisha Arora, 25070521116,B2");

    printRange(root, low, high);

    return 0;
}