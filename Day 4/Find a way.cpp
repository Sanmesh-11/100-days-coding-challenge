#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int diameter = 0;

// Function to find height
int findHeight(TreeNode* root) {

    // If node does not exist
    if (root == NULL) {
        return 0;
    }

    // Find left subtree height
    int leftHeight = findHeight(root->left);

    // Find right subtree height
    int rightHeight = findHeight(root->right);

    // Update maximum diameter
    diameter = max(diameter, leftHeight + rightHeight);

    // Return height of current node
    return 1 + max(leftHeight, rightHeight);
}

int user_logic(TreeNode* root) {

    // Start recursion
    findHeight(root);

    // Return answer
    return diameter;
}

TreeNode* construct_tree(int i, const vector<pair<int, int>>& nodes) {

    if (i < 0 || i >= nodes.size()) {
        return nullptr;
    }

    TreeNode* node = new TreeNode(i + 1);

    // Create left child
    if (nodes[i].first != -1) {
        node->left = construct_tree(nodes[i].first - 1, nodes);
    }

    // Create right child
    if (nodes[i].second != -1) {
        node->right = construct_tree(nodes[i].second - 1, nodes);
    }

    return node;
}

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> nodes(n);

    for (int i = 0; i < n; i++) {
        cin >> nodes[i].first >> nodes[i].second;
    }

    TreeNode* root = construct_tree(0, nodes);

    int result = user_logic(root);

    cout << result << endl;

    return 0;
}