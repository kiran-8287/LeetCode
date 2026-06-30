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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* one = list1;
        ListNode* two = list2;
        ListNode temp(0);
        ListNode* end = &temp;
        while(one != nullptr and two != nullptr){
            if(one->value < two->value){
                end->next = one;
                one = one->next;
            }
            else{
                end->next = two;
                two = two->next;
            }
            end = end->next;
        }
        while(one != nullptr){
            end->next = one;
            one = one->next;
            end = end->next;
        }
        while(two != nullptr){
            end->next = two;
            two = two->next;
            end = end->next;
        }
        return temp->next;
    }
};