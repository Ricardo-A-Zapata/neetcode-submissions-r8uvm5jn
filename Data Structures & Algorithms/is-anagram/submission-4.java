class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;

        int[] alphabet = new int[26];

        for (int idx = 0; idx < s.length(); idx++){
            alphabet[s.charAt(idx) - 'a']++;
            alphabet[t.charAt(idx) - 'a']--;
        }

        for (int idx = 0; idx < 26; idx++){
            if (alphabet[idx] != 0) return false;
        }
        
        return true;

    }
}
