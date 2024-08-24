#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int heightofTree(Node* root) {
    if(root == NULL) return 0;

    int left = heightofTree(root->left);
    int right = heightofTree(root->right);
    return 1+max(left, right);
}