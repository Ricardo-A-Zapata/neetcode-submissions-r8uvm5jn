class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        const seen = new Map();

        for (let idx = 0; idx < nums.length; idx++){
            const complement = target - nums[idx];

            if (seen.has(complement)){
                return [seen.get(complement), idx];
            }
            seen.set(nums[idx], idx);
        }
        return [-1, -1];
    }
}
