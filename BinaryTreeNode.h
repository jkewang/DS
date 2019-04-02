#ifndef BINARY_TREE_NODE_H
#define BiNARY_TREE_NODE_H

class BinaryTreeNode{
public:
    BinaryTreeNode* parentNode;
    BinaryTreeNode* leftNode;
    BinaryTreeNode* rightNode;
    double nodeKey;

    BinaryTreeNode();
    BinaryTreeNode(double key);
    ~BinaryTreeNode();
};

#endif