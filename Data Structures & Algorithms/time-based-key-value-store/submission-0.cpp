class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> keyStore;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        keyStore[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        int left = 0, right = keyStore[key].size() - 1;
        string result = "";

        while (left <= right){
            int mid = left + (right - left)/2;

            if (keyStore[key][mid].first <= timestamp){
                result = keyStore[key][mid].second;
                left = mid + 1;
            } else right = mid - 1;
        }

        return result;
    }
};
