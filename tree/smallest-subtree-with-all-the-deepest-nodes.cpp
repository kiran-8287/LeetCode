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
    vector<TreeNode*> getdeepest(TreeNode* root){
        vector<TreeNode*> level;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            level.clear();

            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node);

                if(node->left != nullptr){
                    q.push(node->left);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                }
            }
            
        }
        return level;
    }
    TreeNode* getparent(TreeNode* root, TreeNode* child){
        if(root == nullptr || root == child){
            return nullptr;
        }
        if(root->left == child || root->right == child){
            return root;
        }
        TreeNode* l = getparent(root->left,child);
        if(l != nullptr){
            return l;
        }
        return getparent(root->right, child);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        vector<TreeNode*> deepnodes = getdeepest(root);
        if(deepnodes.size() == 1){
            return deepnodes[0];
        }
        return getparent(root,deepnodes[0]);
    }
};