class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap< Integer, Integer > freq = new HashMap<>();

        for (int num : nums){
            Integer amt = freq.get(num);
            freq.put(num, (amt == null ? 0 : amt) + 1);
        }

        ArrayList< Integer > keys = new ArrayList<>(freq.keySet());
        keys.sort((a,b) -> freq.get(b) - freq.get(a));

        int[] result = new int[k];

        for (int idx = 0; idx < k; idx++){
            result[idx] = keys.get(idx);
        }

        return result;
    }
}
