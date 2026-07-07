class Solution(object):
    def isPalindrome(self, s):
        s = s.upper()
        new = ""
        for m in s:
            if m.isalnum():
                new += m
        return new == new[::-1]       

        
        
