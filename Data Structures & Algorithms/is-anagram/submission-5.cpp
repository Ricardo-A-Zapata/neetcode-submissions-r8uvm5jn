class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map< char, int > freq_s;
        std::unordered_map< char, int > freq_t;

        for (auto c: s){
            freq_s[c]++;
        }

        for (auto c: t){
            freq_t[c]++;
        }
        
        return freq_s == freq_t;
    }
};
