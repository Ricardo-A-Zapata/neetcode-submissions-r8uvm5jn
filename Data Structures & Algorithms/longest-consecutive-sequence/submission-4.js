class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    longestConsecutive(nums) {
        const seen = new Set(nums);
        let result = 0;

        for (const num of nums){
            if (!(seen.has(num - 1))){
                let length = 1;
                while (seen.has(num + length)){
                    length++;
                }
                result = Math.max(result, length);
            }
        }
        return result;
    }
}
