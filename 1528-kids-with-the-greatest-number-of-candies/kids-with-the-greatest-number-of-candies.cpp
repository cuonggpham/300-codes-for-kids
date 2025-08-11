class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size(),false);
        int maxCandy = *max_element(begin(candies), end(candies));
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= maxCandy){
                res[i] = true;
            }
        }
        return res;
    }
};