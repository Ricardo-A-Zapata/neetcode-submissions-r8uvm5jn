class Solution:

    def encode(self, strs: List[str]) -> str:
        return "".join(f'{len(word)}:{word}' for word in strs)

    def decode(self, s: str) -> List[str]:

        result = []

        idx = 0
        while idx < len(s):
            end = s.index(':', idx)
            length = int(s[idx:end])
            result.append(s[end+1: end+1+length])
            idx = end + 1 + length
        
        return result
