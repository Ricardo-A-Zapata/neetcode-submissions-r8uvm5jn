using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complements;

        for (int idx = 0; idx < nums.size(); idx++){
            if (complements.contains(target - nums[idx])){
                return {complements.at(target - nums[idx]), idx};
            }
            complements[nums[idx]] = idx;
        }
        return {-1, -1};
    }
};
