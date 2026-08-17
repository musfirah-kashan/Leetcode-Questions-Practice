class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        nums.sort()
        count=1
        min_value=nums[0]
        for i in nums:
            if i-min_value>k:
                count+=1
                min_value=i
        return count    


        