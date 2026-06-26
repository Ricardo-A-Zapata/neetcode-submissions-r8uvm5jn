class Solution:
    def isValid(self, s: str) -> bool:
        if not s:
            return False

        pairs = {
            ')':'(', '}':'{', ']':'['
        }
        stack = []

        for sym in s:

            if sym in pairs:

                if stack and stack[-1] == pairs[sym]:
                    stack.pop()

                else:
                    return False

            else:
                stack.append(sym)

        return True if not stack else False