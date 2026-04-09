class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] result = new int[nums.length];

        int leftProduct = 1;
        for (int idx = 0; idx < nums.length; idx++){
            result[idx] = leftProduct;
            leftProduct *= nums[idx];
        }

        int rightProduct = 1;
        for (int idx = nums.length - 1; idx > -1; idx--){
            result[idx] *= rightProduct;
            rightProduct *= nums[idx];
        }

        return result;
    }
}  
