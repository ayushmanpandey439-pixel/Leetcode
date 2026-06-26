class Solution(object):
    def runningSum(self, nums):
        ans = []
        current_sum = 0
        for n in nums:
            current_sum += n
            ans.append(current_sum)  
        return ans
