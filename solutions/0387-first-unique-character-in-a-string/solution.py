class Solution:
    def firstUniqChar(self, s: str) -> int:
        for i in range(len(s)):
            character = s[i]
            if s.count(character) == 1:
                return i
        return -1
        
