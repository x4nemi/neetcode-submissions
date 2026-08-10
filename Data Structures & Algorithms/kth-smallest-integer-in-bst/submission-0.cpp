/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int mn = 1e6;
    vector<int> v;
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        return v[k-1];
    }

    void dfs(TreeNode* root){
        if(!root) return;
        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
    }
};
