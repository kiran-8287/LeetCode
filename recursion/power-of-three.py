class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if(n==0):
            return False
        i = 0
        while(3**i <= n):
            if(3**i == n):
                return True
            i = i + 1
        return False
        