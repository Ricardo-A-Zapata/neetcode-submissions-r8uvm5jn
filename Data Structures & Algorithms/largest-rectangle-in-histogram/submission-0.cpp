class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        std::vector<int> stk;
        stk.reserve(heights.size() + 1);
        stk.push_back(-1);
        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++){
            while (stk.back() != -1 && heights[stk.back()] > heights[i]){
                const int currHei = heights[stk.back()]; stk.pop_back();
                maxArea = std::max(maxArea, (currHei) * (i - (stk.back() + 1)));
            }
            stk.push_back(i);
        }

        while (stk.back() != -1){
            const int currHei = heights[stk.back()]; stk.pop_back();
            maxArea = std::max( maxArea, (currHei) * ((int)heights.size() - (stk.back() + 1) ) );
        }

        return maxArea;
    }
};
