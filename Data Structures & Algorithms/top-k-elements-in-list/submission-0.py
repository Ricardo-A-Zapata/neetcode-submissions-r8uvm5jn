class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        freq = {}

        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        
        amounts = [[num, amt] for num, amt in freq.items()]
        amounts.sort(key = lambda x: x[1], reverse=True)
        
        result = []

        for i in range(k):
            result.append(amounts[i][0])
        
        return result
        