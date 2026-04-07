class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap< String, List<String> > output = new HashMap<>();

        for (String word: strs){
            char[] chars = word.toCharArray();
            Arrays.sort(chars);
            String key = new String(chars);

            if (output.get(key) == null) output.put(key, new ArrayList<>());
            output.get(key).add(word);
        }
        return new ArrayList<>(output.values());
    }
}
