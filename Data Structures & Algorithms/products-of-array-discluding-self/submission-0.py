class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        left, right = [1 for _ in range(len(nums))], [1 for _ in range(len(nums))]

        for i in range(1, len(nums)):
            left[i] = left[i-1] * nums[i-1]
        
        for i in range(len(nums)-2, -1, -1):
            right[i] = right[i+1] * nums[i+1]

        result = []

        for idx in range(len(nums)):
            result.append(left[idx]*right[idx])
        
        return result

        