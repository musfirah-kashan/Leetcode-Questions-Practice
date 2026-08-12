class Solution:
    def checkString(self, s: str) -> bool:
        l1=[]
        l2=[]
        for i in range(len(s)):
            if s[i]=='a':
                l1.append(i)
            else:
                l2.append(i)   
        if not l1 or not l2:
            return True
        if l1[-1]<l2[0]:
            return True
        else:
            return False                 