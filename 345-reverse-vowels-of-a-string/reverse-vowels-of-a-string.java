class Solution {
    public String reverseVowels(String s) {
        char[] string = s.toCharArray();
        int l = 0, r = string.length - 1;
        String vowels = "aeiouAEIOU";
        while(l<r){
            while(l<r && vowels.indexOf(string[l]) == -1){
                l++;
            }
            while(l<r && vowels.indexOf(string[r]) == -1){
                r--;
            }
            char tmp = string[l];
            string[l] = string[r];
            string[r] = tmp;

            l++;
            r--;
        }
        String res = new String(string);
        return res;
    }
}