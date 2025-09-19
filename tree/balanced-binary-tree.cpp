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
    int get_height(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        return 1 + max(get_height(node->left),get_height(node->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int l = get_height(root->left);
        int r = get_height(root->right);
        if(abs(l-r) > 1){
            return false;
        }
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};