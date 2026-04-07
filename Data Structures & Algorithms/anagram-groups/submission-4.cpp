using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> output;

        for (size_t idx = 0; idx < strs.size(); idx++){
            string key = strs[idx];
            sort(key.begin(), key.end());
            output[key].push_back(strs[idx]);
        }

        vector<vector<string>> result;
        for (auto& [key, val] : output) {
            result.push_back(val);
        }
        return result;
    
    }
};
