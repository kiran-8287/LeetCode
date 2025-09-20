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
    vector<int> inorder(TreeNode* root){
        if(root == nullptr){
            return {};
        }
        vector<int> l = inorder(root->left);
        vector<int> r = inorder(root->right);
        vector<int> out;
        out.insert(out.end(),l.begin(),l.end());
        out.push_back(root->val);
        out.insert(out.end(),r.begin(),r.end());

        return out;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> values = inorder(root);
        int min = INT_MAX;
        for(int i = 1; i < values.size(); i++){
            int diff = abs(values[i] - values[i-1]);
            if(diff < min){
                min = diff;
            }
        }
        return min;
    }
};