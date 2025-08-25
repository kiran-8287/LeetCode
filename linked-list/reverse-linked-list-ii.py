# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseBetween(self, head, left, right):
        """
        :type head: Optional[ListNode]
        :type left: int
        :type right: int
        :rtype: Optional[ListNode]
        """
        if(head == None or left == right):
            return head
        temp = head
        prev = head
        for i in range(left-2):
            prev = prev.next
        current = prev.next
        for j in range(right-left):
            nxt = current.next
            current.next = nxt.next
            nxt.next = prev.next
            prev.next = nxt
        
        return temp