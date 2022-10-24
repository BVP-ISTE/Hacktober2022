# Given an integer x, return true if x is palindrome integer.
# An integer is a palindrome when it reads the same backward as forward.
# For example, 121 is a palindrome while 123 is not.
class Solution(object):
    def isPalindrome(self, x):
        a = str(x);
        b = len(a)
        for i in range(b/2):
            if(a[i]!=a[b-1-i]):
                return False
        return True
        
