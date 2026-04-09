class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for (const string& word: strs){
            res += to_string(word.size()) + ':' + word;
        }
        
        return res;

    }

    vector<string> decode(string s) {

        vector<string> res;

        int i = 0;
        while (i < s.size()){
            int j = i + 1;

            while (s.at(j) != ':') j++;

            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;

    }
};
