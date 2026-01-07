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
    vector<long long> subtreesum(TreeNode* root){
        dfs(root);
        return allsubtreesums;
    }
    int maxProduct(TreeNode* root) {
        if(root == nullptr) return 0;
        long long total_sum = dfs(root);
        vector<long long> sumlist = subtreesum(root);
        long long out = 0;
        for(int i = 0; i < sumlist.size(); i++){
            int subtree_sum = sumlist[i];
            out = max(out, (total_sum - subtree_sum) * subtree_sum);
        }
        return out % 1000000007;
    }
};