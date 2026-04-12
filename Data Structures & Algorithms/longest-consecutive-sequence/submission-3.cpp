#include <iostream>
#include <vector>



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) seen.insert(num);

        int result = 0;

        for (int num : nums){
            if (seen.find(num - 1) == seen.end()){
                int length = 1;
                while (seen.find(num + length) != seen.end()) length++;
                result = max(result, length);
            }

        }
        return result;
    }
};
