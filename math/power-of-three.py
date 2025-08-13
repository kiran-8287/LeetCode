class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if(n==0):
            return False
        i = 0
        while(i**3 <= n):
            if(i**3 == n):
                return True
            i = i + 1
        return False
        