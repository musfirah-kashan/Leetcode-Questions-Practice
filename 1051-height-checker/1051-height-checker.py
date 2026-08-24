class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        l1=sorted(heights)
        count=0
        for j,k in zip(heights,l1):
            if j!=k:
                count+=1
        return count            

        