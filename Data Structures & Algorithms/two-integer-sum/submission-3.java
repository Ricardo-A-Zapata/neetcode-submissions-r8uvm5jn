class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap< Integer, Integer > complements = new HashMap<>();

        for (int idx = 0; idx < nums.length; idx++){
            Integer complement = target - nums[idx];
            if (complements.containsKey(complement)){
                return new int[]{complements.get(complement), idx};
            }
            complements.put(nums[idx], idx);
        }

        return new int[]{-1, -1};
        
    }
}
