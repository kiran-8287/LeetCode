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
        if(head == nullptr){
            return head;
        }
        unordered_map<ListNode* , ListNode*> map;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow->next != nullptr){
            if(map[slow] == nullptr){
                map[slow]=slow->next;
            }
            else{
                return slow;
            }
            slow = slow->next;
        }
        return  nullptr;

    }
};