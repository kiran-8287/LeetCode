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
    vector<long long> allsubtreesums;
    long long dfs(TreeNode* root){
            if(!root) return 0;
            long long leftsum = dfs(root->left);
            long long rightsum = dfs(root->right);
            long long total = leftsum + rightsum + root->val;
            allsubtreesums.push_back(total);
            return total;
    }
    int maxProduct(TreeNode* root) {
        allsubtreesums.clear();
        long long totalSum = dfs(root);
        long long ans = 0;
        for (long long s : allsubtreesums) {
            ans = max(ans, s * (totalSum - s));
        }
        return ans % 1000000007;
    }
};