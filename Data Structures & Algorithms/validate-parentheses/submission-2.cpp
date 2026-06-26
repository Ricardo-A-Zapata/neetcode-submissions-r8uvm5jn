class Solution {
public:
    bool isValid(string s) {

        if (s.empty()) return false;

        std::unordered_map<char, char> pairs = {
            {')','('}, 
            {']','['}, 
            {'}','{'}
        };

        std::vector<char> stack = {};

        for (const char symbol : s){

            if (pairs.count(symbol)){
                
                if (!stack.empty() && stack.back() == pairs[symbol]){
                    stack.pop_back();
                } else return false;

            } else {
                stack.push_back(symbol);
            }
        }

        return stack.empty();
    }
};