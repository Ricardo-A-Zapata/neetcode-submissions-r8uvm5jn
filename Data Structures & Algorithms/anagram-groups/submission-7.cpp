using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> output;

        for (const auto& word: strs){
            vector<int> count(26, 0);

            for (char c: word) count[c - 'a']++;

            string key = to_string(count[0]);
            for (int idx = 0; idx < count.size(); idx++){
                key += ','+to_string(count[idx]);
            }
            output[key].push_back(word);
        }

        vector< vector<string> > result;
        for (const auto&[key, val]: output) result.push_back(val);
        return result;
        
    }
};
