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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        vector<int> list;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* out = new ListNode(0);
        while(temp1 != nullptr or temp2 != nullptr){
            if(temp1 != nullptr){
                sum = sum + temp1->val;
                temp1 = temp1->next;
            }
            if(temp2 != nullptr){
                sum = sum + temp2->val;
                temp2 = temp2->next;
            }
            sum = sum + carry;
            carry = sum/10;
            list.push_back(sum%10);
            sum = 0;
        }
        if(carry == 1){
            list.push_back(1);
        }
        ListNode* temp = out;
        for(int i = 0; i < list.size(); i++){
            ListNode* node = new ListNode(list[i]);
            temp->next = node;
            temp = node;
        }
        return out->next;
    }
};