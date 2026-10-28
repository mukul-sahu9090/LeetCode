class Solution(object):
    def integerReplacement(self, n):
        count=0
        while(n!=1):
            if(n%2==0):
                n=n/2
            elif(n==3):
                n=n-1
            elif(n%4==1):
                n=n-1
            elif(n%4==3):
                n=n+1
            count=count+1
        return count
        """
        :type n: int
        :rtype: int
        """
        