class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {

        const freq = {};

        for (const num of nums){
            freq[num] = (freq[num] || 0) + 1;
        }

        const counts = Array.from({ length: nums.length + 1}, ()=>[]);

        for (const num in freq){
            counts[freq[num]].push(parseInt(num));
        }

        const res = [];

        for (let idx = counts.length - 1; idx > -1; idx--){
            for (const num of counts[idx]){
                res.push(num);
                if (res.length === k) return res;
            }
        }
        return res;
    }
}
