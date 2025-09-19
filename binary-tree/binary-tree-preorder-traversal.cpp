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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<int> out;
        out.push_back(root->val);
        vector<int> l = preorderTraversal(root->left);
        vector<int> r = preorderTraversal(root->right);
        out.insert(out.end(), l.begin() , l.end());
        out.insert(out.end(), r.begin() , r.end());
        return out;
    }
};