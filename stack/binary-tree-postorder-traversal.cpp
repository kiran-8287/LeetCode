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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<int> out;
        vector<int> l = postorderTraversal(root->left);
        vector<int> r = postorderTraversal(root->right);
        out.insert(out.end(), l.begin() , l.end());
        out.insert(out.end(), r.begin() , r.end());
        out.push_back(root->val);
        return out;
    }
};