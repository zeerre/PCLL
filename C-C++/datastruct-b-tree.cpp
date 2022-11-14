////*************************************************************************
////* File Name: datastruct-b-tree.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-14  21-17-48====
////*************************************************************************
//
//B-tree Properties
//For each node x, the keys are stored in increasing order.
//In each node, there is a boolean value x.leaf which is true if x is a leaf.
//If n is the order of the tree, each internal node can contain at most n - 1 keys along with a pointer to each child.
//Each node except root can have at most n children and at least n/2 children.
//All leaves have the same depth (i.e. height-h of the tree).
//The root has at least 2 children and contains a minimum of 1 key.
//If n ≥ 1, then for any n-key B-tree of height h and minimum degree t ≥ 2, h ≥ logt (n+1)/2.
//
//B树属性
//对于每个节点 x，密钥按升序存储。
//在每个节点中，都有一个布尔值 x.leaf，如果 x 是叶子，则该值为真。
//如果 n 是树的顺序，则每个内部节点最多可以包含 n - 1 个键以及指向每个子节点的指针。
//除根外的每个节点最多可以有 n 个子节点和至少 n/2 个子节点。
//所有叶子都具有相同的深度（即树的高度-h）。
//根至少有 2 个孩子，并且至少包含 1 个密钥。
//如果 n ≥ 1，那么对于任何高度为 h 且最小度为 t ≥ 2 的 n-key B 树，h ≥ logt (n+1)/2。

//B树上的操作
//在 B 树中搜索元素
//在 B 树中搜索元素是在二叉搜索树中搜索元素的一般形式。 遵循以下步骤。

//从根节点开始，将 k 与节点的第一个键进行比较。
//如果 k = 节点的第一个键，则返回节点和索引。
//如果 k.leaf = true，则返回 NULL（即未找到）。
//如果 k < 根节点的第一个键，则递归搜索该键的左孩子。
//如果当前节点中存在多个键且 k > 第一个键，则将 k 与节点中的下一个键进行比较。
//如果 k < 下一个键，则搜索该键的左孩子（即 k 位于第一个键和第二个键之间）。
//否则，搜索键的右孩子。
//重复步骤 1 到 4，直到到达叶子。

// Searching a key on a B-tree in C++

#include <iostream>
using namespace std;

class TreeNode {
  int *keys;
  int t;
  TreeNode **C;
  int n;
  bool leaf;

   public:
  TreeNode(int temp, bool bool_leaf);

  void insertNonFull(int k);
  void splitChild(int i, TreeNode *y);
  void traverse();

  TreeNode *search(int k);

  friend class BTree;
};

class BTree {
  TreeNode *root;
  int t;

   public:
  BTree(int temp) {
    root = NULL;
    t = temp;
  }

  void traverse() {
    if (root != NULL)
      root->traverse();
  }

  TreeNode *search(int k) {
    return (root == NULL) ? NULL : root->search(k);
  }

  void insert(int k);
};

TreeNode::TreeNode(int t1, bool leaf1) {
  t = t1;
  leaf = leaf1;

  keys = new int[2 * t - 1];
  C = new TreeNode *[2 * t];

  n = 0;
}

void TreeNode::traverse() {
  int i;
  for (i = 0; i < n; i++) {
    if (leaf == false)
      C[i]->traverse();
    cout << " " << keys[i];
  }

  if (leaf == false)
    C[i]->traverse();
}

TreeNode *TreeNode::search(int k) {
  int i = 0;
  while (i < n && k > keys[i])
    i++;

  if (keys[i] == k)
    return this;

  if (leaf == true)
    return NULL;

  return C[i]->search(k);
}

void BTree::insert(int k) {
  if (root == NULL) {
    root = new TreeNode(t, true);
    root->keys[0] = k;
    root->n = 1;
  } else {
    if (root->n == 2 * t - 1) {
      TreeNode *s = new TreeNode(t, false);

      s->C[0] = root;

      s->splitChild(0, root);

      int i = 0;
      if (s->keys[0] < k)
        i++;
      s->C[i]->insertNonFull(k);

      root = s;
    } else
      root->insertNonFull(k);
  }
}

void TreeNode::insertNonFull(int k) {
  int i = n - 1;

  if (leaf == true) {
    while (i >= 0 && keys[i] > k) {
      keys[i + 1] = keys[i];
      i--;
    }

    keys[i + 1] = k;
    n = n + 1;
  } else {
    while (i >= 0 && keys[i] > k)
      i--;

    if (C[i + 1]->n == 2 * t - 1) {
      splitChild(i + 1, C[i + 1]);

      if (keys[i + 1] < k)
        i++;
    }
    C[i + 1]->insertNonFull(k);
  }
}

void TreeNode::splitChild(int i, TreeNode *y) {
  TreeNode *z = new TreeNode(y->t, y->leaf);
  z->n = t - 1;

  for (int j = 0; j < t - 1; j++)
    z->keys[j] = y->keys[j + t];

  if (y->leaf == false) {
    for (int j = 0; j < t; j++)
      z->C[j] = y->C[j + t];
  }

  y->n = t - 1;
  for (int j = n; j >= i + 1; j--)
    C[j + 1] = C[j];

  C[i + 1] = z;

  for (int j = n - 1; j >= i; j--)
    keys[j + 1] = keys[j];

  keys[i] = y->keys[t - 1];
  n = n + 1;
}

int main() {
  BTree t(3);
  t.insert(8);
  t.insert(9);
  t.insert(10);
  t.insert(11);
  t.insert(15);
  t.insert(16);
  t.insert(17);
  t.insert(18);
  t.insert(20);
  t.insert(23);

  cout << "The B-tree is: ";
  t.traverse();

  int k = 10;
  (t.search(k) != NULL) ? cout << endl
                 << k << " is found"
              : cout << endl
                 << k << " is not Found";

  k = 2;
  (t.search(k) != NULL) ? cout << endl
                 << k << " is found"
              : cout << endl
                 << k << " is not Found\n";
}
