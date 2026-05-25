class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        left, right = 0, len(numbers) - 1

        while left < right:

            while left < right and numbers[left] == numbers[left+1]:
                left += 1
            
            while left < right and numbers[right-1] == numbers[right]:
                right -= 1
            
            curr = numbers[left] + numbers[right]

            if target == curr:
                return [left+1, right+1]
            
            if target > curr:
                left += 1
            else:
                right -= 1
        
        return [-1,-1]