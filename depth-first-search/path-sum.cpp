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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return false;
        }
        int sum = root->val;
        if(sum == targetSum && root->left == nullptr && root->right == nullptr){
            return true;
        }
        else if(sum == targetSum && (root->left != nullptr || root->right != nullptr)){
            return false;
        }
        return (hasPathSum(root->left,targetSum - sum) || hasPathSum(root->right,targetSum - sum));
    }
};