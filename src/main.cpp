#include "BinaryTree.cpp"

using namespace std;


int main()

    binaryTree tree;
    tree.insertNode(5);
    tree.insertNode(6);
    tree.insertNode(7);
    tree.insertNode(8);
    tree.insertNode(9);

    tree.preOrder(tree.root);
    cout << endl;
    tree.inOrder(tree.root);
    cout << endl;

    tree.postOrder(tree.root);
    cout << endl;

    tree.levelOrder(tree.root);
    cout << endl;

    return 0;
}
