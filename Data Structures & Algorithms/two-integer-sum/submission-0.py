class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        complements = {}

        for idx, num in enumerate(nums):
            if num in complements:
                return [complements[num], idx]
            complements[target - num] = idx
        

        return [-1, -1]