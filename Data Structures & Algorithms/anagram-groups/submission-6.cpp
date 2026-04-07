using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string, vector<string> > groups;

        for (size_t idx = 0; idx < strs.size(); idx++){
            string key = strs.at(idx);
            sort(key.begin(), key.end());
            groups[key].push_back(strs.at(idx));
        }

        vector< vector<string> > result;
        for (const auto& [key, val]: groups){
            result.push_back(val);
        }
        return result;
    }
};
