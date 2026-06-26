class MinStack {
public:
    std::vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back({val, st.empty() ? val : std::min(val, st.back().second)});
    }
    
    void pop() {
        if (!st.empty()){
            st.pop_back();
        }
    }
    
    int top() const {
        return st.back().first;
    }
    
    int getMin() const {
        return st.back().second;
    }
};
