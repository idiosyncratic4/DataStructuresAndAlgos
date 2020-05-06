import collections
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        s=Counter(nums)
        for x in s:
            if s[x]>=(len(nums)/2):
                return x
