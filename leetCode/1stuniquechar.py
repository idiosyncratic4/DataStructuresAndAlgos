class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        count = {}
        for ch in set(s):
            count[ch] = s.count(ch)
        
        for idx in range(len(s)):
            if count[s[idx]] == 1:
                return idx
            
        return -1
