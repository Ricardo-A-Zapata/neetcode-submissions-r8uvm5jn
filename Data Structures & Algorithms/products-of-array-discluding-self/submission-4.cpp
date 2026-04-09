class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;

        int leftProd = 1;
        for (int idx = 0; idx < nums.size(); idx++){
            result.push_back(leftProd);
            leftProd *= nums[idx];
        }

        int rightProd = 1;
        for (int idx = nums.size() - 1; idx > -1; idx--){
            result[idx] *= rightProd;
            rightProd *= nums[idx];
        }
        return result;

    }
};
