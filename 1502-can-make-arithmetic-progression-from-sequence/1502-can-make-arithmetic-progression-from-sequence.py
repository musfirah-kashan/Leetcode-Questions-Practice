class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        if len(arr) <= 2:
            return True 
        l1=sorted(arr)
        l2=sorted(arr,reverse=True)
        for i in range(1,len(l1)-1):
            if l1[i]-l1[i-1]!=l1[i+1]-l1[i]:
                break
        else:
            return True    
        for i in range(1,len(l2)-1):
            if l2[i]-l2[i-1]!=l2[i+1]-l2[i]:
                return False
        return True
