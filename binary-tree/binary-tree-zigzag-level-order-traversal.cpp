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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);

        int l = 0;
        while(q.empty() == false){
            int n = q.size();
            vector<int> level;
            for(int i = 0; i < n; i ++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                
                if(node->left != nullptr){
                    q.push(node->left);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                }
            }
            if(l%2 == 1){
                reverse(level.begin(), level.end()); 
            }
            result.push_back(level);
            l = l+1;
        }
        return result;
    }
};