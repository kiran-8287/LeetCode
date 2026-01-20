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
    vector<int> path;
    vector<string> res;
    void dfs(TreeNode* root){
        if(root == nullptr){
            return;
        }
        path.push_back(root->val);
        if(!root->left && !root->right){
            string p = "";
            for(int i=0;i<path.size()-1;i++){
                p = p + to_string(path[i]) + "->";
            }
            p = p + to_string(path[path.size()-1]);
            res.push_back(p);
        }
        else{
            dfs(root->right);
            dfs(root->left);
        }
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root);
        return res;
    }
};