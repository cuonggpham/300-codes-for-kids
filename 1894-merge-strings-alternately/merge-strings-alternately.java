class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder sb = new StringBuilder();
        int i = 0;
        while (word1.length() > i || word2.length() > i) {
            if (word1.length() > i){
                sb.append(word1.charAt(i));
            }
            if (word2.length() > i){
                sb.append(word2.charAt(i));
            }
            i++;
        }
        return sb.toString();
    }
}