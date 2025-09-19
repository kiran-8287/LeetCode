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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        else if(root->left != nullptr && root->left->val >= root->val){
            return false;
        }
        else if(root->right != nullptr && root->right->val <= root->val){
            return false;
        }
        return (isValidBST(root->left) && isValidBST(root->right));
    }
};