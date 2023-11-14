class Solution:
    def twoSum(self, nums, target):
        """
        Runtime Details
        3971ms
        Beats 8.87%of users with Python3


        Memory Details
        16.95MB
        Beats 93.18%of users with Python3

        self.nums = nums
        print(nums, target)
        lengthOfNums = len(self.nums)

        for i in range(lengthOfNums):
            print("i--", self.nums[i])
            for j in range(i+1, lengthOfNums):
                print("j--", self.nums[j])
                if (self.nums[i] + self.nums[j] == target):
                    return [i, j]
        """
        dct = {}
        for i in range(len(nums)):
            dct[nums[i]] = i
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in dct and dct[complement] != i:
                return [i, dct[complement]]

nums = [0,3,4,0]
target = 0
print(Solution().twoSum(nums, target))
