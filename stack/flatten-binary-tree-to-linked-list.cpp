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
    vector<int> preorder(TreeNode* root){
        if(root == nullptr){
            return {};
        }
        vector<int> result;
        result.push_back(root->val);

        vector<int> l = preorder(root->left);
        vector<int> r = preorder(root->right);
        result.insert(result.end(), l.begin(), l.end());
        result.insert(result.end(), r.begin(), r.end());

        return result;
    }
    void flatten(TreeNode* root) {
        if(root != nullptr){
            vector<int> list = preorder(root);
            
            TreeNode* head = new TreeNode(0);
            TreeNode* curr = head;
            for(int i = 0; i < list.size(); i++){
                TreeNode* temp = new TreeNode(list[i]);
                curr->right = temp;
                curr = curr->right;
            }
            root->left = nullptr;
            root->right = head->right->right;
        }
    }
};