#https://leetcode.com/problems/longest-consecutive-sequence/
#Should use Union-Find Algo but I dont know about it yet !!! Need to study it!!!
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        set_nums= set(nums)
        longest = 0
        for num in set_nums: 
            if num - 1 not in set_nums:
                current_num = num
                count = 1 
                while current_num + 1 in set_nums: 
                    count += 1
                    current_num += 1
                longest = max(longest,count)        
        return longestclass Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        set_nums= set(nums)
        longest = 0
        current_num = 0
        if len(nums) > 0:
            for num in set_nums: 
                if current_num - 1 not in set_nums:
                    current_num = num
                    count = 1 
                    while current_num + 1 in set_nums: 
                        count += 1 
                    longest = max(longest,count)        
        return longest
