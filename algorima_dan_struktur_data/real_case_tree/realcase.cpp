#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct Solution {
    TreeNode* invertTree(TreeNode* root) {
        // Base Case
        if(root==NULL)
            return NULL;
        invertTree(root->left); //Call the left substree
        invertTree(root->right); //Call the right substree
        // Swap the nodes
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root; // Return the root
    }
};

int main() {

    Solution solution;

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    root->right = new TreeNode(7, new TreeNode(6), new TreeNode(9));

    TreeNode* answer = solution.invertTree(root);

    cout << answer->val << '\n';             
    cout << answer->left->val << '\n';       
    cout << answer->right->val << '\n';      
    cout << answer->left->left->val << '\n'; 
    cout << answer->left->right->val << '\n';
    cout << answer->right->left->val << '\n';
    cout << answer->right->right->val << '\n';
    
    return 0;
}

// printf("hello World");