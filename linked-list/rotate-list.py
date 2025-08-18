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
        length = 0
        temp = head
        while(temp != None):
            temp = temp.next
            length += 1
        k = k % length
        
        count = 0
        while(count < k):
            right = head
            while(right.next.next != None):
                right = right.next
            right.next.next = head
            head = right.next
            right.next = None
            count =count + 1
        return head
        
            
