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
        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;
        for(int i = 0; i < n; i++){
            first = first->next;
        }
        if(first == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        while(first != NULL){
            first = first->next;
            temp = second;
            second = second->next;
        }
        temp->next = second->next;
        second->next = NULL;
        return head;
    }
};