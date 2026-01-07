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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<TreeNode*> st;
        st.push_back(p);
        st.push_back(q);
        while(st.empty() == false){
            TreeNode* node2 = st.back();
            st.pop_back();
            TreeNode* node1 = st.back();
            st.pop_back();
            if(node1 == nullptr && node2 == nullptr){
                continue;
            }
            else if(node1 == nullptr || node2 == nullptr ||node1->val != node2->val){
                return false;
            }

            st.push_back(node1->right);
            st.push_back(node2->right);
            st.push_back(node1->left);
            st.push_back(node2->left);

        }
        return true;
    }
};