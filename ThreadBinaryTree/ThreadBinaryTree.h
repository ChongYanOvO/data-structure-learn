#include <stdio.h>
#include <stdlib.h>

typedef char E;

struct TreeNode {
    E element;
    struct TreeNode *left, *right;
    struct TreeNode * parent;
    int leftTag, rightTag;
};

typedef struct TreeNode *Node;

Node createNode(E element);

void preOrderThreaded(Node root);

void preOrder(Node root);

void inOrderThreaded(Node root);

void inOrder(Node root);

void postOrderThreaded(Node root);

void postOrder(Node root);