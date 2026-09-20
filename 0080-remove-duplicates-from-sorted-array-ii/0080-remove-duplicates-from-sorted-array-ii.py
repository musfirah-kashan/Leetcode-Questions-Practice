class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)<=2:
            return len(nums)
        write=0
        count=0
        for i in range(len(nums)):
            if nums[i-1]==nums[i]:
                count+=1
            else:
                count=1
            if count<=2:
                nums[write]=nums[i]
                write+=1
        return write                    




        