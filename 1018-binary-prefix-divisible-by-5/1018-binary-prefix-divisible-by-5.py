class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        l1 = []
        binary = ""

        for i in range(len(nums)):
            binary += str(nums[i])          
            decimal = int(binary, 2)        

            if decimal % 5 == 0:
                l1.append(True)
            else:
                l1.append(False)

        return l1