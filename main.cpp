#include <iostream>
#include "BinaryTree.h"

using namespace std;


BinaryTree* buildTree(){
    BinaryTree* testTree = new BinaryTree;
    //double testArray[10] = {5,7,4,3,2,6,1,8,9};
    double testArray[13] = {2,26,4,18,24,21,15,8,23,5,12,14,10};

    for(int i=0; i<13; i++){
        BinaryTreeNode* testNode = new BinaryTreeNode(testArray[i]);
        testTree->treeInsert(testNode);
    }
    cout << "finished tree building!" << endl;
    return testTree;
}

void inorderWalk(BinaryTreeNode* head, BinaryTreeNode* pointNode){
    if (pointNode != NULL){
        inorderWalk(head, pointNode->leftNode);
        if((pointNode->rightNode == NULL) && (pointNode->leftNode == NULL)){
            //cout << "!!!!" << endl;
            if(head->leftNode==NULL){
                head->leftNode = pointNode;
            }else {
                head->rightNode = pointNode;
                head->leftNode->rightNode = head->rightNode;
                head->leftNode = head->rightNode;
            }
            //cout << head->nodeKey << endl;
            cout << pointNode->nodeKey << endl;
        }
        inorderWalk(head, pointNode->rightNode);
    }
}

void homework_1(BinaryTree* testTree){
    BinaryTreeNode* head;
    BinaryTreeNode* pointNode;
    BinaryTreeNode init;
    pointNode = testTree->rootNode;
    init = BinaryTreeNode(10);
    head = &init;
    inorderWalk(head, pointNode);
    //cout << pointNode->leftNode->leftNode->leftNode->leftNode->rightNode->rightNode->nodeKey << endl;
}

void homework_2(BinaryTree* testTree){
    double x = 0;
    BinaryTreeNode* subTree;
    while(testTree->treeSearch(x)!=NULL){
        subTree = testTree->treeSearch(x);
        testTree->removeSubtree(subTree);
    }
    //cout << testTree->rootNode->rightNode->leftNode->nodeKey << endl;
}

void homework_3(BinaryTree* testTree){
    BinaryTreeNode* rootNode;
    rootNode = testTree->rootNode;
    //cout << rootNode->rightNode->leftNode->rightNode->leftNode->rightNode->nodeKey << endl;
    //testTree->preoderTreeWalk(rootNode);
    //testTree->inorderTreeWalk(rootNode);
    testTree->postorderTreeWalk(rootNode);
}

int main(){
    BinaryTree* testTree;
    BinaryTreeNode* pointNode;
    testTree = buildTree();
    homework_3(testTree);
    //homework_1(testTree);
    //homework_2(testTree);
    return 0;
}

