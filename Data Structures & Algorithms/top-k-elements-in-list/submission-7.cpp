#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for (int num : nums){
            freq[num] = freq[num] + 1;
        }

        vector<vector<int>> counts(nums.size() + 1);

        for (const auto& entry : freq){
            counts[entry.second].push_back(entry.first);
        }

        vector<int> result;

        for (int idx = counts.size() - 1; idx > -1; idx--){
            for( int num : counts[idx]){
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }

        return result;
        
    }
};
