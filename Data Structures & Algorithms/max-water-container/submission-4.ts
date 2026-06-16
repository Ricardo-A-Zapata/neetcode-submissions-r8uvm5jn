class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(height: number[]): number {
        let left = 0, right = height.length - 1;

        let ans = 0;

        while (left < right){
            const curr = (right - left) * Math.min(height[left], height[right]);
            ans = Math.max(ans, curr);

            if (height[left] < height[right]){
                left++;
            } else right--;
        }
        
        return ans;
    }
}
