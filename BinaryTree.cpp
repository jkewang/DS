#include "BinaryTree.h"
#include <iostream>
using std::cout;
using std::endl;

BinaryTree::BinaryTree() {
    rootNode = NULL;
}

BinaryTree::~BinaryTree() {
    if(rootNode==NULL){
        return;
    }
    removeSubtree(rootNode);
}

void BinaryTree::removeSubtree(BinaryTreeNode *x) {
    if(x==NULL){
        return;
    }
    BinaryTreeNode* left = x->leftNode;
    BinaryTreeNode* right = x->rightNode;

    *x = NULL;
    delete x;
    removeSubtree(left);
    removeSubtree(right);
}

void BinaryTree::preoderTreeWalk(BinaryTreeNode *x) {
    if(x != NULL){
        cout << "Node Key:" << x->nodeKey << endl;
        preoderTreeWalk(x->leftNode);
        preoderTreeWalk(x->rightNode);

    }
}

void BinaryTree::inorderTreeWalk(BinaryTreeNode *x) {
    if(x != NULL){
        inorderTreeWalk(x->leftNode);
        cout << "Node Key:" << x->nodeKey << endl;
        inorderTreeWalk(x->rightNode);
    }
}

void BinaryTree::postorderTreeWalk(BinaryTreeNode *x) {
    if(x != NULL){
        postorderTreeWalk(x->leftNode);
        postorderTreeWalk(x->rightNode);
        cout << "Node Key:" << x->nodeKey << endl;
    }
}

void BinaryTree::treeInsert(BinaryTreeNode *node) {
    BinaryTreeNode* y = NULL;
    BinaryTreeNode* x = rootNode;

    while(x!=NULL){
        y = x;
        if(node->nodeKey < x->nodeKey)
            x = x->leftNode;
        else
            x = x->rightNode;
    }
    node->parentNode = y;

    if(y == NULL){
        rootNode = node;
    }else if(node->nodeKey < y->nodeKey){
        y->leftNode = node;
    }else{
        y->rightNode = node;
    }
}

BinaryTreeNode* BinaryTree::treeSearch(double k) {
    BinaryTreeNode* x = rootNode;
    if(x == NULL) return NULL;
    while(x != NULL && x->nodeKey != k){
        if (k < x->nodeKey)
            x = x->leftNode;
        else
            x = x->rightNode;
    }
    return x;
}