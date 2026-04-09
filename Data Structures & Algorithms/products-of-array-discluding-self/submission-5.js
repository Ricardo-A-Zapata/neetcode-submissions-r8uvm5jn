class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {
        const result = [];

        let leftProd = 1;
        for (let idx = 0; idx < nums.length; idx++){
            result.push(leftProd);
            leftProd *= nums[idx];
        }

        let rightProd = 1;
        for (let idx = nums.length-1; idx > -1; idx--){
            result[idx] *= rightProd;
            rightProd *= nums[idx];
        }

        return result;
    }
}
