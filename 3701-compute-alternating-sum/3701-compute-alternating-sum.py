class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        sum_nos=0
        for i in range(len(nums)):
            if i%2==0:
                sum_nos+=nums[i]
            else:
                sum_nos-=nums[i]
        return sum_nos       




        