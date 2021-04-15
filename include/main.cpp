#include "binaryTree.cpp"
using namespace std;


int main()
{
    binaryTree t1;
    t1.insertNode(5);
    t1.insertNode(6);
    t1.insertNode(7);
    t1.insertNode(8);
    t1.insertNode(9);

    t1.preOrder(t1.root);
    cout << endl;
    t1.inOrder(t1.root);
    cout << endl;

    t1.postOrder(t1.root);
    cout << endl;

    t1.levelOrder(t1.root);
    cout << endl;

    return 0;
}
