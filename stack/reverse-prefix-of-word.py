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
        s = []
        
        for i in range(len(word)):
            if(word[i] == ch):
                s.append(word[i])
                break
            else:
                right = right + 1
                s.append(word[i])
        temp = word[right+1:]
        sub = ""
        while(s != []):
            sub = sub + s.pop()
        return sub + temp


        