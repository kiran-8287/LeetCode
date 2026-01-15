/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr and fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                if(slow == head){
                    return head;
                }
                return slow->next;
            }
        }
        return nullptr;
    }
};