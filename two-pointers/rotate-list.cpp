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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head == nullptr || head->next == nullptr){
            return head;
        }
        int n = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            n++;
        }
        if(k == n){
            return head;
        }
        k = k%n;
        if(k == 0){
            return head;
        }
        ListNode* after = head;
        ListNode* before = nullptr;
        ListNode* temp1 = after;
        for(int i = 0; i < n-k-1; i++){
            temp1 = temp1->next;
        }
        before = temp1->next;
        temp1->next = nullptr;
        temp = before;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = after;
        return before;
    }
};