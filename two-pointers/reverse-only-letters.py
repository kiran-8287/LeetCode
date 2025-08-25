class Solution(object):
    def reverseOnlyLetters(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = list(s)
        left = 0
        right = len(s)-1
        small = "abcdefghijklmnopqrstuvwxyz"
        while(left < right):
            if(s[left] not in small and s[left] not in small.upper()):
                left = left + 1
            elif(s[right] not in small and s[right] not in small.upper()):
                right = right - 1
            else:
                s[left] , s[right] = s[right], s[left]
                left = left + 1
                right = right - 1
        
        return "".join(s)
        
