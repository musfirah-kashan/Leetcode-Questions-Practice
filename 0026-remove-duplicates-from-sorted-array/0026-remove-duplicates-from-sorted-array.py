class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l1=[]
        for i in nums:
            if i not in l1:
                l1.append(i)
        while len(l1)<len(nums):
            l1.append('_')
        for i in range(len(nums)):
            nums[i]=l1[i]
        return len([x for x in nums if x!='_'])                   
        