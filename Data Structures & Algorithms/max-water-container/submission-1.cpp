class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;

        int ans = 0;

        while (left < right){
            const int curr = (right - left) * (heights[left] < heights[right] ? heights[left] : heights[right]);
            ans = curr > ans ? curr: ans;

            if (heights[left] < heights[right]) left ++;
            else right--;
        }
        return ans;
    }
};
