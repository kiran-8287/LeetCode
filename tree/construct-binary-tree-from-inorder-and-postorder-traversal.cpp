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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0){
            return nullptr;
        }
        int root_val = postorder[postorder.size()-1];
        TreeNode* root = new TreeNode(root_val);
        int idx = 0;
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == root_val){
                idx = i;
                break;
            }
        }
        vector<int> in1(inorder.begin(), inorder.begin() + idx);
        vector<int> in2(inorder.begin()+idx+1, inorder.end());
        vector<int> post1(postorder.begin(), postorder.begin() + idx);
        vector<int> post2(postorder.begin()+idx, postorder.end()-1);

        root->left = buildTree(in1,post1);
        root->right = buildTree(in2,post2);
        return root;
    }
};