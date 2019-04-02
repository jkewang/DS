#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "BinaryTreeNode.h"

class BinaryTree{
public:
    BinaryTreeNode* rootNode;

    BinaryTree();
    ~BinaryTree();

    void preoderTreeWalk(BinaryTreeNode* x);
    void inorderTreeWalk(BinaryTreeNode* x);
    void postorderTreeWalk(BinaryTreeNode* x);

    void treeInsert(BinaryTreeNode* node);
    BinaryTreeNode* treeSearch(double k);

    void removeSubtree(BinaryTreeNode* x);
};

#endif
