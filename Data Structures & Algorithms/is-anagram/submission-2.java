class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap< Character, Integer > freq_s = new HashMap< Character, Integer >();
        HashMap< Character, Integer > freq_t = new HashMap< Character, Integer >();

        for (int idx = 0; idx < s.length(); idx++){
            char c = s.charAt(idx);
            Integer count = freq_s.get(c);
            freq_s.put(c, (count == null ? 0 : count) + 1);
        }

        for (int idx = 0; idx < t.length(); idx++){
            char c = t.charAt(idx);
            Integer count = freq_t.get(c);
            freq_t.put(c, (count == null ? 0 : count) + 1);
        }

        return freq_s.equals(freq_t);

    }
}
