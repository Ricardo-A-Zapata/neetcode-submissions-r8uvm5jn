#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map< int, int > seen;

        for (int idx = 0; idx < nums.size(); idx++){
            int complement = target - nums[idx];

            if (seen.find(complement) != seen.end()){
                return {seen.at(complement), idx};
            }
            seen[nums[idx]] = idx;
        }
        return {-1, -1};
        
    }
};
