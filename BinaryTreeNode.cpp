#include "BinaryTreeNode.h"
#include <iostream>

using namespace std;

BinaryTreeNode::BinaryTreeNode() {
    parentNode = NULL;
    rightNode = NULL;
    leftNode = NULL;
    nodeKey = -999999;
}

BinaryTreeNode::BinaryTreeNode(double key){
    parentNode = NULL;
    rightNode = NULL;
    leftNode = NULL;
    nodeKey = key;
}

BinaryTreeNode::~BinaryTreeNode() {
    //cout << "destroy!" << endl;
}