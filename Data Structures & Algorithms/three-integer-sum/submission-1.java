class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);

        for (int idx = 0; idx < nums.length; idx++){

            if (nums[idx] > 0) return result;

            if (idx > 0 && nums[idx - 1] == nums[idx]) continue;

            int left = idx + 1, right = nums.length - 1;

            while (left < right){

                int curr = nums[idx] + nums[left] + nums[right];

                if (curr == 0){
                    result.add(Arrays.asList(nums[idx], nums[left], nums[right]));
                    left++;
                    right--;

                    while (left < right && nums[left - 1] == nums[left]){
                        left++;
                    }
                    while (left < right && nums[right + 1] == nums[right]){
                        right--;
                    }
                }
                else if (curr < 0){
                    left++;
                } else {right--;}
            }
        }

        return result;


        
    }
}
