class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        x = 0
        for curr in range(len(nums)):
            for multiplier in range(len(nums)):
                if multiplier == curr:
                    pass
                else:
                    nums[curr] = nums[curr] * nums[multiplier] 
            x += 1
        return nums
