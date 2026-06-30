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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> del;
        ListNode* curr = head;
        while(curr != nullptr && curr->next != nullptr){
            if(curr->val == curr->next->val){
                del.insert(curr->val);
            }
            curr = curr->next;
        }
        curr = head;
        ListNode res(0);
        ListNode* temp = &res;
        while(curr != nullptr){
            if(del.find(curr->val) == del.end()){
                temp->next = curr;
                temp = temp->next;
            }
            curr = curr->next;
        }
        temp->next = nullptr;
        return res.next;
    }
};