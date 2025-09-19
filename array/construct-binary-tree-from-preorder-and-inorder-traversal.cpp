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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0 || inorder.size() == 0){
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[0]);
        int mid = 0;
        for(int i = 0; i < inorder.size(); i++){
            if(preorder[0] == inorder[i]){
                mid = i;
                break;
            }
        }
        vector<int> pre1(preorder.begin() + 1,preorder.begin() + mid + 1);
        vector<int> pre2(preorder.begin()+ mid+ 1,preorder.end());
        vector<int> in1(inorder.begin() ,inorder.begin() + mid);
        vector<int> in2(inorder.begin()+mid+1 ,inorder.end());

        root->left = buildTree(pre1,in1);
        root->right = buildTree(pre2,in2);
        return root;
    }
};