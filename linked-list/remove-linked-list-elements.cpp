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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* del = new ListNode();
        while(temp != nullptr){
            if(temp == head && temp->val == val){
                del = head->next;
                temp->next = nullptr;
                temp = del;
                head = temp;
            }
            else if(temp->val == val){
                del->next = temp->next;
                temp->next = nullptr;
                temp = del->next;
            }
            else{
                del = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};