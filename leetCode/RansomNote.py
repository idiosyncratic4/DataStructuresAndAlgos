class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        _co=Counter(magazine)
        for i in ransomNote:
            if _co[i]==0:
                return False
            else:
                _co[i]-=1
        return True
