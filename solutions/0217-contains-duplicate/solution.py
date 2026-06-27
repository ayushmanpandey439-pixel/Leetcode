class Solution(object):
    def containsDuplicate(self, nums):
        seen = set()
        
        for n in nums:
            if n in seen:
                return True
            else:
                seen.add(n) # This runs only if 'n' was NOT in the set
                
        return False
