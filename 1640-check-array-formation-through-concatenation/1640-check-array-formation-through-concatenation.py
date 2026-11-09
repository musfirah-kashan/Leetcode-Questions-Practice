class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        first = {p[0]: p for p in pieces}
        i = 0
        while i < len(arr):
            if arr[i] not in first:
                return False
            piece = first[arr[i]]
            for num in piece:
                if arr[i] != num:
                    return False
                i += 1
        return True
        