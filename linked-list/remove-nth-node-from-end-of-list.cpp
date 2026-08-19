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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp != nullptr){
            len+=1;
            temp = temp->next;
        }
        if(n==len){
            temp = head;
            head = head->next;
            delete temp;
            return head; 
        }
        ListNode* curr = head;
        for(int i = 0; i < len-n-1; i++){
            curr = curr->next;
        }
        temp = curr->next;
        curr->next = curr->next->next;
        temp->next = nullptr;
        return head;
    }
};