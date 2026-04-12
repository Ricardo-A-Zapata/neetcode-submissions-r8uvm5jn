class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        for (int num : nums) seen.add(num);

        int result = 0;

        for (int num : nums){
            if (!(seen.contains(num - 1))){
                int length = 1;
                while (seen.contains(num + length)){
                    length++;
                }
                result = Math.max(result, length);

            }
        }

        return result;
    }
}
