class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res={}
        for i in strs:
            sort_word="".join(sorted(i))
            if sort_word in res:
                res[sort_word].append(i)
            else:
                res[sort_word]=[i]
        return list(res.values())            
        