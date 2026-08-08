class Solution:
    def minimumChairs(self, s: str) -> int:
        max_chairs=0
        used_chairs=0
        for i in s:
            if i == 'E':
                used_chairs+=1
                max_chairs=max(max_chairs,used_chairs)
            else:
                used_chairs-=1    
        return max_chairs        
        