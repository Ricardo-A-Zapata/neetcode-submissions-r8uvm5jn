class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        output = {}
        
        def get_group(word):
            return tuple(sorted(word))

        for word in strs:
            group = get_group(word)

            if group not in output:
                output[group] = []
            output[group].append(word)
        
        return [ val for key, val in output.items() ]

        