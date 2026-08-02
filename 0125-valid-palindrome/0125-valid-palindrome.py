class Solution:
    def isPalindrome(self, s: str) -> bool:
        new=''
        for char in s:
            if char.isalnum():
                new+=char.lower()
        if new==new[::-1]:
            return True   
        else:
            return False

        