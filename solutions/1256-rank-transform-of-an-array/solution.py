class Solution(object):
    def arrayRankTransform(self, arr):
        unique_sorted = sorted(list(set(arr)))
        ranks = {}
        rank_counter = 1 
        for num in unique_sorted:
            ranks[num] = rank_counter
            rank_counter += 1
        result = []
        for num in arr:
            result.append(ranks[num])
        return result
        
        
       
