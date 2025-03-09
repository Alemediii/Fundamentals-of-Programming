#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    vector<TreeNode*> children;

    TreeNode(int x) : val(x) {}
};

TreeNode* createTree() {
    TreeNode* root = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);

    root->children.push_back(node2);
    root->children.push_back(node3);
    node2->children.push_back(node4);
    node2->children.push_back(node5);

    return root;
}

void traverseTree(TreeNode* node) {
    if (node == nullptr) return;

    cout << node->val << " ";

    for (TreeNode* child : node->children) {
        traverseTree(child);
    }
}

int main() {
    TreeNode* tree = createTree();

    cout << "Tree traversal (DFS): ";
    traverseTree(tree);
    cout << endl;

    return 0;
}
