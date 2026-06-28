# Sorting
# TC = O(nlogn)
# SC = O(n) or O(1) depending on sorting algo

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                return True
        return False  