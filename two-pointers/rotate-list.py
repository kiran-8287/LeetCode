# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        if(head == None or head.next == None ):
            return head
        length = 1
        tail = head
        while(tail.next != None):
            tail = tail.next
            length += 1
        k = k % length
        if(k==0):
            return head
        tail.next = head
        n = length - k
        new_tail = head
        for i in range(n-1):
            new_tail = new_tail.next
        head = new_tail.next
        new_tail.next = None
        return head