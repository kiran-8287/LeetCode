# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def swapPairs(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if(head == None or head.next == None):
            return head
        
        f = head
        s = head.next
        p = None

        while(f != None and s != None):
            t = s.next
            s.next = f
            f.next = t
            if(p != None):
                p.next = s
            else:
                head = s
            p = f
            f = t
            if(t != None):
                s = t.next
            else:
                s = None
        
        return head
