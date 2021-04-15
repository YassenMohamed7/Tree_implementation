#ifndef BINTREE_H_INCLUDED
#define BINTREE_H_INCLUDED

#include <iostream>
#include <queue>

typedef int TREE_ENTRY;

class binaryTree
{
private:
    struct node
    {
        TREE_ENTRY data;
        node* left;
        node* right;
    };
public:

    node* root = NULL;
    int size = 0;
    void insertNode(TREE_ENTRY value);
    bool isEmpty();
    bool isFull();
    void preOrder(node* pn);
    void inOrder(node* pn);
    void postOrder(node* pn);
    void levelOrder(node* pn);

};



#endif // BINTREE_H_INCLUDED
