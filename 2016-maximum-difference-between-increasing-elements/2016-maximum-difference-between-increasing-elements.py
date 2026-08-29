class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        diff=0
        max_diff=-1
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[j]>nums[i]:
                    diff=nums[j]-nums[i]
                    if diff>max_diff:
                        max_diff=diff
        return max_diff           