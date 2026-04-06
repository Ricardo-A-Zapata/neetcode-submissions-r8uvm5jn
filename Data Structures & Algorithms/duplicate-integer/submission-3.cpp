class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> dict;

        for (const int num : nums){
            if (dict.count(num) == 0){
                dict[num] = 1;
            } else return true;
        }
        return false;
    }
};