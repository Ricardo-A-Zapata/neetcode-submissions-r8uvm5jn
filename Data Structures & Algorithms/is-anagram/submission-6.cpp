class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        int alphabet[26] = {};

        for (int idx = 0; idx < s.size(); idx++){
            alphabet[s[idx] - 'a']++;
            alphabet[t[idx] - 'a']--;
        }

        for (int idx = 0; idx < 26; idx++){
            if (alphabet[idx] != 0) return false;
        }

        return true;
        
    }
};
