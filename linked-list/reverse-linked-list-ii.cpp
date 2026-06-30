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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right){
            return head;
        }

        ListNode* bleft = head;
        ListNode* aright = head;
        for(int i=1; i < left-1; i++){
            bleft = bleft->next;
        }
        for(int i=1; i < right+1;i++){
            aright = aright->next;
        }
        ListNode* nhead = bleft->next;
        ListNode* curr = bleft->next;
        ListNode* prev = bleft;
        while(curr != aright){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        bleft->next = prev;
        nhead->next = aright;
        return head;
    }
};