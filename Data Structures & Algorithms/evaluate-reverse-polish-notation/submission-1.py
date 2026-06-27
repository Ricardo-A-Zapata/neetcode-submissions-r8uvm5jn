class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        
        for token in tokens:
            if token == '+':
                stack.append(stack.pop() + stack.pop())
            elif token == '-':
                second, first = stack.pop(), stack.pop()
                stack.append(first - second)
            elif token == '*':
                stack.append(stack.pop()*stack.pop())
            elif token == '/':
                second, first = stack.pop(), stack.pop()
                result = math.floor(abs(first) / abs(second))
                if (first < 0) ^ (second < 0):
                    result = -result
                stack.append(result)
            else:
                stack.append(int(token))
            
        
        return stack[0]