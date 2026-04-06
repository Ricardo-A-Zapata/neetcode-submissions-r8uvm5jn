class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const counts = [...nums].reduce((acc, elem) => {
            acc[elem] = (acc[elem] || 0) + 1;
            return acc;
        }, {})
        return Object.keys(counts).length !== nums.length;
    }
}
