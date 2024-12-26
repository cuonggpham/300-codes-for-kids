class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int maxx = 0;
        unordered_set<char> se;
        for(int r=0; r<n; r++){
            while(se.count(s[r]) != 0){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            maxx = max(maxx, r-l+1); 
        }
        return maxx;
    }
};