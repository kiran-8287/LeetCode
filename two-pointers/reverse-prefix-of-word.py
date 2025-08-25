class Solution(object):
    def reversePrefix(self, word, ch):
        """
        :type word: str
        :type ch: str
        :rtype: str
        """
        if(ch not in word):
            return word
        right = 0        
        for i in range(len(word)):
            if(word[i] == ch):
                break
            else:
                right = right + 1
        sub = word[0: right+1]
        temp = word[right+1:]
        rev = sub[::-1]
        return rev+temp