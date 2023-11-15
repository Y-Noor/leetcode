class Solution:
    def containsDuplicate(self, nums):
        unique = set(nums)
        n = len(nums)
        if n  == len(unique):
            return False
        return True

nums = [1,2,3,1]
print(Solution().containsDuplicate(nums))
