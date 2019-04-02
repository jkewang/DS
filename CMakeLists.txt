cmake_minimum_required(VERSION 3.10)
project(DS)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp BinaryTree.cpp BinaryTree.h BinaryTreeNode.cpp BinaryTreeNode.h)

add_executable(DS main.cpp BinaryTree.cpp BinaryTree.h BinaryTreeNode.cpp BinaryTreeNode.h)