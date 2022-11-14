////*************************************************************************
////* File Name: datastruct-fullbinary-tree.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-14  20-56-56====
////*************************************************************************
//
//Full Binary Tree Theorems
//Let, i = the number of internal nodes
//     n = be the total number of nodes
//     l = number of leaves
//     λ = number of levels
//The number of leaves is i + 1.
//The total number of nodes is 2i + 1.
//The number of internal nodes is (n – 1) / 2.
//The number of leaves is (n + 1) / 2.
//The total number of nodes is 2l – 1.
//The number of internal nodes is l – 1.
//The number of leaves is at most 2λ - 1.
//
//设，     i = 内部节点数
//      n = 节点总数
//      l = 叶子数
//      λ = 层数
//叶子的数量是 i + 1。
//节点总数为 2i + 1。
//内部节点数为 (n – 1) / 2。
//叶数为 (n + 1) / 2。
//节点总数为 2l – 1。
//内部节点数为 l – 1。
//叶子的数量最多为 2λ - 1。

// Checking if a binary tree is a full binary tree in C++

#include <iostream>
using namespace std;

struct Node {
  int key;
  struct Node *left, *right;
};

// New node creation
struct Node *newNode(char k) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->key = k;
  node->right = node->left = NULL;
  return node;
}

bool isFullBinaryTree(struct Node *root) {
  
  // Checking for emptiness
  if (root == NULL)
    return true;

  // Checking for the presence of children
  if (root->left == NULL && root->right == NULL)
    return true;

  if ((root->left) && (root->right))
    return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

  return false;
}

int main() {
  struct Node *root = NULL;
  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->left->right->left = newNode(6);
  root->left->right->right = newNode(7);

  if (isFullBinaryTree(root))
    cout << "The tree is a full binary tree\n";
  else
    cout << "The tree is not a full binary tree\n";
}
