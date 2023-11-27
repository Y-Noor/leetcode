class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        nums.sort()
        
        l = 1
        temp = 1
        for i in range(0, len(nums)-1):
            if nums[i+1] == nums[i]+1 or nums[i+1] == nums[i]:
                if nums[i+1] == nums[i]:
                    temp = temp
                else:
                    temp += 1
                if temp > l:
                    l = temp
            else:
                temp = 1
        return l
