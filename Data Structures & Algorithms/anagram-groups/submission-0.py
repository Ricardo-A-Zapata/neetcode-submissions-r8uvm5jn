class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        output = {}

        def get_freq(word):
            return tuple(sorted(word))

        for word in strs:
            freq = get_freq(word)

            if freq in output:
                output[freq].append(word)
            else:
                output[freq] = [word]
        
        return [ val for key, val in output.items() ]
        