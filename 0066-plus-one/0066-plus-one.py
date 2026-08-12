class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        str1="".join(map(str,digits))
        str2=int(str1)+1
        l1=str(str2)
        l1=list(map(int,l1))
        return l1