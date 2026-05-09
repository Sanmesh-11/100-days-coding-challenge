#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to create balanced BST
Node* buildTree(vector<int>& arr, int start, int end) {

    // Base condition
    if (start > end) {
        return NULL;
    }

    // Find middle index
    int mid = (start + end) / 2;

    // Create root node
    Node* root = new Node(arr[mid]);

    // Create left subtree
    root->left = buildTree(arr, start, mid - 1);

    // Create right subtree
    root->right = buildTree(arr, mid + 1, end);

    return root;
}

// Preorder traversal printing
void preorder(Node* root) {

    // Base condition
    if (root == NULL) {
        return;
    }

    // Print left child
    if (root->left != NULL) {
        cout << root->left->data;
    }
    else {
        cout << ".";
    }

    // Print root
    cout << " <- " << root->data << " -> ";

    // Print right child
    if (root->right != NULL) {
        cout << root->right->data;
    }
    else {
        cout << ".";
    }

    cout << endl;

    // Traverse left subtree
    preorder(root->left);

    // Traverse right subtree
    preorder(root->right);
}

void userLogic(int N, vector<int>& arr) {

    // Sort the array
    sort(arr.begin(), arr.end());

    // Build balanced BST
    Node* root = buildTree(arr, 0, N - 1);

    // Print preorder traversal
    preorder(root);
}

int main() {

    int N;

    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    userLogic(N, arr);

    return 0;
}