class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        v = "aeiou"
        s = list(s)
        left = 0
        right = len(s)-1
        while(left < right):
            if((s[left] in v or s[left] in v.upper()) and (s[right] in v or s[right] in v.upper())):
                s[left], s[right] = s[right], s[left]
                right = right - 1
                left = left + 1
            elif((s[left] in v or s[left] in v.upper()) and (s[right] not in v and s[right] not in v.upper())):
                right = right - 1
            elif((s[left] not in v and s[left] not in v.upper()) and (s[right] in v or s[right] in v.upper())):
                left = left + 1
            else:
                right = right - 1
                left = left + 1
        
        return "".join(s)