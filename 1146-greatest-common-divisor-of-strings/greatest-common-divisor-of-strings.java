class Solution {
    public String gcdOfStrings(String str1, String str2) {
        if(!(str1 + str2).equals(str2 + str1)) {
            return "";
        }

        int len = gcd(str1.length(), str2.length());

        return str1.substring(0, len);
    }

    private int gcd(int a, int b) {
        while (b != 0){
            int tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
}