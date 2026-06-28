# # Brute Force
# # TC = O(n^2)
# # SC = O(n)
# class Solution:
#     def hasDuplicate(self, nums: List[int]) -> bool:
#         for i in range(len(nums)):
#             for j in range(i + 1, len(nums)):
#                 if nums[i] == nums[j]:
#                     return True
#         return False

# # Sorting
# # TC = O(nlogn)
# # SC = O(n) or O(1) depending on sorting algo

# class Solution:
#     def hasDuplicate(self, nums: List[int]) -> bool:
#         nums.sort()
#         for i in range(1,len(nums)):
#             if nums[i]==nums[i-1]:
#                 return True
#         return False  

# # Hashset
# # TC = O(n)
# # SC = O(n) 

# class Solution:
#     def hasDuplicate(self, nums: List[int]) -> bool:
#         seen=set()
#         for num in nums:
#             if num in seen:
#                 return True
#             seen.add(num)    
#         return False 

# Hashset length
# TC = O(n)
# SC = O(n) 

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) < len(nums)