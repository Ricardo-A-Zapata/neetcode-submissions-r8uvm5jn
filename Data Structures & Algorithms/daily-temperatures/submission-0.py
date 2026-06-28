class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:

        stack = []
        answer = [0] * len(temperatures)

        for idx, temp in enumerate(temperatures):
            while stack and stack[-1][0] < temp:
                tem, i = stack.pop()
                answer[i] = idx - i
            stack.append((temp, idx))
        
        return answer
        