class Solution(object):
    def numJewelsInStones(self, J, S):
        res = 0
        for l1 in J:
            for l2 in S:
                if l1 == l2:
                    res += 1
        
        return res
        
