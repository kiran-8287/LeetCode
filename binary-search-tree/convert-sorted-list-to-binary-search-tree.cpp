/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* buildTree(vector<int>& nums, int l, int r){
        if(l>r){
            return nullptr;
        }
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildTree(nums,l,mid-1);
        root->right = buildTree(nums,mid+1,r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        vector<int> nums;
        while(head != NULL){
            nums.push_back(head->val);
            head = head->next;
        }
        TreeNode* root = buildTree(nums, 0 , nums.size()-1);
        return root;
    }
};