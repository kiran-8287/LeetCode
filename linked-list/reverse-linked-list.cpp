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
    ListNode* reverseList(ListNode* head) {
        ListNode* present = head;
        ListNode* previous = NULL;
        ListNode* future = NULL;

        while(present != NULL){
            future = present->next;
            present->next = previous;

            previous = present;
            present = future;

        }
        return previous;
    }
};