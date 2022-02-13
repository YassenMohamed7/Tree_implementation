#include "../include/BinaryTree.h"

using namespace std;

 void binaryTree::insertNode(TREE_ENTRY value)
    {
        node* pn = new node;
        pn->data = value;
        pn->left = pn->right = NULL;

        if(root == NULL)
        {
            root = pn;
            return;
        }

        queue<node*> q;
        q.push(root);

        while(!q.empty())
        {
            node* ptr = q.front();
            q.pop();
            if(ptr->left == NULL)
            {
                ptr->left = pn;
                return;
            }
            else
                q.push(ptr->left);

            if(ptr->right == NULL)
            {
                ptr->right = pn;
                return;
            }
            else
                q.push(ptr->right);
        }
        size++;
}

bool binaryTree::isEmpty()
{
    if(root)
        return false;
    return true;
}

bool binaryTree::isFull()
{
    return false;
}

void binaryTree::preOrder(node* pn)
{
    if(pn)
    {
        cout << pn->data << " ";
        preOrder(pn->left);
        preOrder(pn->right);
    }
}


void binaryTree::inOrder(node* pn)
{
    if(pn)
    {
        inOrder(pn->left);
        cout << pn->data << " ";
        inOrder(pn->right);
    }
}

void binaryTree::postOrder(node* pn)
{
    if(pn)
    {
        postOrder(pn->left);
        postOrder(pn->right);
        cout << pn->data << " ";
    }
}



void binaryTree::levelOrder(node* pn)
{
    queue<node*> q;
    node* ptr = NULL;
    if(pn)
    {
        cout << pn->data <<" ";
        q.push(pn);
    }
    while(!q.empty())
    {
        ptr = q.front();
        q.pop();
        if(ptr->left)
        {
            cout << ptr->left->data << " ";
            q.push(ptr->left);
        }
        if(ptr->right)
        {
            cout << ptr->right->data << " ";
            q.push(ptr->right);
        }
    }
}


