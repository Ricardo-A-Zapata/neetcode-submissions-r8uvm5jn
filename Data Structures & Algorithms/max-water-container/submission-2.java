class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1;

        int ans = 0;

        while (left < right){

            int curr = (right - left) * (Math.min(height[left], height[right]));
            ans = Math.max(ans, curr);

            if (height[left] < height[right]){
                left++;
            } else right--;
        }

        return ans; 
    }
}
