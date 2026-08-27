class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0:
            return 0

        string = ""
        count = 0
        maxcount = 0

        for i in s:
            if i not in string:
                string += i
                count += 1
            else:
                maxcount = max(maxcount, count)
                idx = string.index(i)
                string = string[idx+1:] + i
                count = len(string)

            maxcount = max(maxcount, count)

        return maxcount
 

        