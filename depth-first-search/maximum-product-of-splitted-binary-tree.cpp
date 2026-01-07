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
    int totalsum(TreeNode* root){
        int sum = 0;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            sum = sum + node->val;
            if(node->right != NULL) st.push(node->right);
            if(node->left != NULL) st.push(node->left);
        }
        return sum;
    }
    vector<int> allsubtreesums;
    int dfs(TreeNode* root){
            if(!root) return 0;
            int leftsum = dfs(root->left);
            int rightsum = dfs(root->right);
            int total = leftsum + rightsum + root->val;
            allsubtreesums.push_back(total);
            return total;
    }
    vector<int> subtreesum(TreeNode* root){
        dfs(root);
        return allsubtreesums;
    }

    int maxProduct(TreeNode* root) {
        if(root == nullptr) return 0;
        int total_sum = totalsum(root);
        vector<int> sumlist = subtreesum(root);
        int out = 0;
        for(int i = 0; i < sumlist.size(); i++){
            int subtree_sum = sumlist[i];
            out = max(out, (total_sum - subtree_sum) * subtree_sum);
        }
        return out % 1000000007;
    }
};