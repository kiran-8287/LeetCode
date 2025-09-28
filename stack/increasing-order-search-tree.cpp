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
    void inorder(TreeNode* root, vector<TreeNode*>& nums){
        if(root == NULL){
            return;
        }
        inorder(root->left,nums);
        nums.push_back(root);
        inorder(root->right,nums);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL){
            return;
        }
        vector<TreeNode*> nums;
        inorder(root,nums);

        TreeNode* new_root = nums[0];
        TreeNode* temp = new_root;
        for(int i = 1; i < nums.size(); i++){
            temp->right = nums[i];
            temp->left = NULL;
            temp = temp->right;
        }
        temp->left = NULL;
        temp->right = NULL;
        return new_root;
    }
};