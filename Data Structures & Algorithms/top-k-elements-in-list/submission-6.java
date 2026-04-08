class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        Map< Integer, Integer > freq = new HashMap<>();

        for (int num : nums){
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        List< Integer >[] counts = new List[nums.length + 1];

        for (int idx = 0; idx < nums.length + 1; idx++){
            counts[idx] = new ArrayList<>();
        }

        for (Map.Entry< Integer, Integer > entry : freq.entrySet()){
            counts[entry.getValue()].add(entry.getKey());
        }

        int[] result = new int[k];
        int index = 0;

        for (int idx = counts.length - 1; idx > -1; idx--){
            for (Integer num : counts[idx]){
                result[index++] = num;
                if (index == k) return result;
            }
        }
        return result;

    }
}
