class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap< Integer, Integer > complements = new HashMap<>();

        for (int idx = 0; idx < nums.length; idx++){
            Integer complement = complements.get(nums[idx]);
            if (complement != null){
                return new int[]{complement, idx};
            } else {
                complements.put(target - nums[idx], idx);
            }
        }
        return new int[]{-1, -1};
        
    }
}
