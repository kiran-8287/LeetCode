class Solution {
public:
    int helper(TreeNode* root, int sum) {
        if(root == nullptr){
            return 0;
        }
        sum = sum*10 + root->val;
        if(root->left == nullptr && root->right == nullptr){
            return sum;
        }
        return helper(root->left,sum) + helper(root->right,sum); 
    }

    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
};
