class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        ops = {
            '+':(lambda x,y: x + y),
            '-':(lambda x,y: x - y),
            '*':(lambda x,y: x * y),
            '/':(lambda x,y: int(x / y))
        }

        for token in tokens:
            if token not in ops:
                stack.append(int(token))
            else:
                operation = ops[token]
                second, first = stack.pop(), stack.pop()
                stack.append(operation(first, second))

        return stack[0]