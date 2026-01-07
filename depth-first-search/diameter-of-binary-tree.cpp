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
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    void dfs(TreeNode* root, int& out){
        if (root == nullptr){
            return;
        }
        int l = height(root->left);
        int r = height(root->right);
        out = max(out, l+r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int out = 0;
        dfs(root, out);
        return out;
    }
};