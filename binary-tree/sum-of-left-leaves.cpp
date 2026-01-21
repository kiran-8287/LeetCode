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
    int sum = 0;
    stack<TreeNode*> s;
    void dfs(TreeNode* root){
        if(root == nullptr){
            return;
        }
        if(root->left != nullptr){
            if(root->left->left == nullptr and root->left->right==nullptr){
                sum = sum + root->left->val;
            }
            else{
                dfs(root->left);
            }
        }
        if(root->right != nullptr){
            dfs(root->right);
        }
        else if(root->right == nullptr && root->right == nullptr){
            return;
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return sum;
    }
};