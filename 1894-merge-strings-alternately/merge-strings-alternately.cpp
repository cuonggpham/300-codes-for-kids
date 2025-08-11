class Solution { 
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int maxLength = max(word1.length(), word2.length());

        for(int i=0; i<maxLength; i++){
            if(i<word1.length()){
                res += word1[i];
            }
            if(i<word2.length()){
                res += word2[i];
            }
        }
        return res;
    }
};